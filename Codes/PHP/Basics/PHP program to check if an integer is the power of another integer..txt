<?php
function is_Power($x, $y)
{
      $a = $x;
      $b = $y;
      while ($x % $y == 0) {
       $x = $x / $y;
     }
       
	if($x == 1)
    {
		return "$a is power of $b";
    }
    else
    {
		return "$a is not power of $b";
    }
  
}
print_r(is_Power(16,2)."\n");
print_r(is_Power(12,2)."\n");
print_r(is_Power(81,3)."\n");
?>