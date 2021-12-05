 
### Algorithm
1. Define a function f().
2. Input a and b.
3. If (f(a) * f(b) > 0 ) <br>
   output Error <br>
   stop <br>
4. else if (f(a) * f(b) == 0) <br>
    if(f(a)==0 and f(b)==0) <br>
     output a and b as root <br>
    else if(f(a)==0) <br>
     output a is root <br>
    else <br>
     output b is root <br>
   stop <br>
 5. else <br>
     calculate n  using (log((abs(b-a))) - log(e))/log(2)) <br>
     Repeat step 6 and 7 for n times <br>
     
  
  6. c = (a+b)/2 <br>
  7. if f(c) * f(a) < 0 <br>
      b=c <br>
     else <br>
      a=c <br>
  8. c is the root.
