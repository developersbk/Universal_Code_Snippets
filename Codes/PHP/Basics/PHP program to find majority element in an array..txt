<?php
function majority_element($arr)
 {
        $idx = 0;
        $ctr = 1;
        
        for($i=1; $i<sizeof($arr); $i++)
        {
            if ($arr[$idx] == $arr[$i])
            {
                $ctr += 1;
            }
            else
             {
                $ctr -= 1;
                if ($ctr == 0)
                {
                    $idx = $i;
                    $ctr = 1;
                }
          }   
        }      
    return $arr[$idx];
}
$num1 = array(1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 6);
$num2 = array(1,2,3,3,3,3,2,3,5,3,1,3,3,4,6,1,3,3,4,6,6);
print_r(majority_element($num1)."\n");
print_r(majority_element($num2)."\n");
?>