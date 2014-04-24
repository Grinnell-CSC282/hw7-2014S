break WHERE if COND
-------------------

This helpful tool allows you to set a condition for breaking at a certain point. For example, if you were tracking the values assigned to a variable, say liatrus, throughout a program, you could set a break point when the value of liatrus is changed and add the condition to break only if it is not some value, say 256. The command for this within gdb would be:
  
  `(gdb) break liatrus if liatrus != 256`
