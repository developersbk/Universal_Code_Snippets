<?php
function is_ugly($num)
  {
     $z = $num;
     if ($num == 0)
       {
            return "$num is not an Ugly number";
       }
       
       $x = array(2, 3, 5);
      foreach ($x as $i)
      {
            while ($num % $i == 0)
            {
                $num /= $i;
                 }
         }         
       if ($num==1)
         {
              return "$z is an Ugly number";
         }
         else
         {
              return "$z is not an Ugly number";
         }

 }    

print(is_ugly(12)."\n");
print(is_ugly(7)."\n");
?>