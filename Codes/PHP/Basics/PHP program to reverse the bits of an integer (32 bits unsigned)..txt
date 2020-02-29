<?php
function reverse_integer($n)
{
    $result = 0;
    for($i= 0; $i<32; $i++)
        {
            $result <<= 1;
            $result|= ($n & 1);
            $n >>= 1;
        }
        return $result;

}   
print_r(reverse_integer(1234)."\n");
?>