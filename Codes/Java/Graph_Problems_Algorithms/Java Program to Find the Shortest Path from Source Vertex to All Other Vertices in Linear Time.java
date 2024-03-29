/*This Java program is to Implement weighted graph and find shortest path from one source vertex to every other vertex. Dijkstra’s Algorithm can be used to achieve this goal.*/

//This is a java program to find the shortest path from one vertex to all other vertex
import java.util.HashSet;
import java.util.InputMismatchException;
import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;

public class Shortest_Path_to_AllVertex
{
    private int          distances[];
    private Set<Integer> settled;
    private Set<Integer> unsettled;
    private int          number_of_nodes;
    private int          adjacencyMatrix[][];

    public Shortest_Path_to_AllVertex(int number_of_nodes)
    {
        this.number_of_nodes = number_of_nodes;
        distances = new int[number_of_nodes + 1];
        settled = new HashSet<Integer>();
        unsettled = new HashSet<Integer>();
        adjacencyMatrix = new int[number_of_nodes + 1][number_of_nodes + 1];
    }

    public void shortestPath(int adjacency_matrix[][], int source)
    {
        int evaluationNode;
        for (int i = 1; i <= number_of_nodes; i++)
            for (int j = 1; j <= number_of_nodes; j++)
                adjacencyMatrix[i][j] = adjacency_matrix[i][j];
        for (int i = 1; i <= number_of_nodes; i++)
            {
                distances[i] = Integer.MAX_VALUE;
            }
        unsettled.add(source);
        distances[source] = 0;
        while (!unsettled.isEmpty())
            {
                evaluationNode = getNodeWithMinimumDistanceFromUnsettled();
                unsettled.remove(evaluationNode);
                settled.add(evaluationNode);
                evaluateNeighbours(evaluationNode);
            }
    }

    private int getNodeWithMinimumDistanceFromUnsettled()
    {
        int min;
        int node = 0;
        Iterator<Integer> iterator = unsettled.iterator();
        node = iterator.next();
        min = distances[node];
        for (int i = 1; i <= distances.length; i++)
            {
                if (unsettled.contains(i))
                    {
                        if (distances[i] <= min)
                            {
                                min = distances[i];
                                node = i;
                            }
                    }
            }
        return node;
    }

    private void evaluateNeighbours(int evaluationNode)
    {
        int edgeDistance = -1;
        int newDistance = -1;
        for (int destinationNode = 1; destinationNode <= number_of_nodes; destinationNode++)
            {
                if (!settled.contains(destinationNode))
                    {
                        if (adjacencyMatrix[evaluationNode][destinationNode] != Integer.MAX_VALUE)
                            {
                                edgeDistance = adjacencyMatrix[evaluationNode][destinationNode];
                                newDistance = distances[evaluationNode] + edgeDistance;
                                if (newDistance < distances[destinationNode])
                                    {
                                        distances[destinationNode] = newDistance;
                                    }
                                unsettled.add(destinationNode);
                            }
                    }
            }
    }

    public static void main(String... arg)
    {
        int adjacency_matrix[][];
        int number_of_vertices;
        int source = 0;
        Scanner scan = new Scanner(System.in);
        try
            {
                System.out.println("Enter the number of vertices");
                number_of_vertices = scan.nextInt();
                adjacency_matrix = new int[number_of_vertices + 1][number_of_vertices + 1];
                System.out.println("Enter the Weighted Matrix for the graph");
                for (int i = 1; i <= number_of_vertices; i++)
                    {
                        for (int j = 1; j <= number_of_vertices; j++)
                            {
                                adjacency_matrix[i][j] = scan.nextInt();
                                if (i == j)
                                    {
                                        adjacency_matrix[i][j] = 0;
                                        continue;
                                    }
                                if (adjacency_matrix[i][j] == 0)
                                    {
                                        adjacency_matrix[i][j] = Integer.MAX_VALUE;
                                    }
                            }
                    }
                System.out.println("Enter the source ");
                source = scan.nextInt();
                Shortest_Path_to_AllVertex sp = new Shortest_Path_to_AllVertex(
                    number_of_vertices);
                sp.shortestPath(adjacency_matrix, source);
                System.out.println("The Shorted Path from " + source
                                   + " to all other nodes are: ");
                for (int i = 1; i <= sp.distances.length - 1; i++)
                    {
                        System.out.println(source + " to " + i + " is "
                                           + sp.distances[i]);
                    }
            }
        catch (InputMismatchException inputMismatch)
            {
                System.out.println("Wrong Input Format");
            }
        scan.close();
    }
}

/*

Enter the number of vertices
5
Enter the Weighted Matrix for the graph
0 9 6 5 3
0 0 0 0 0
0 2 0 4 0
0 0 0 0 0
0 0 0 0 0
Enter the source
1
The Shorted Path from 1 to all other nodes are:
1 to 1 is 0
1 to 2 is 8
1 to 3 is 6
1 to 4 is 5
1 to 5 is 3