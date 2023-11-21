uses math;
var n,x,i,j,t,res:longint;
    a,f:array[0..1000,0..1000] of longint;
begin
  assign(input,'bonus.inp');reset(input);
  assign(output,'bonus.out');rewrite(output);
  readln(n,x);
  for i:=0 to n do begin f[0,i]:=0;f[i,0]:=0;end;
  for i:=1 to n do
   begin
     for j:=1 to n do
      begin
        read(a[i,j]);
        f[i,j]:=a[i,j]+f[i-1,j]+f[i,j-1]-f[i-1,j-1];
      end;
     readln;
   end;
  res:=f[x,x];
  for i:=x to n do
    for j:=x to n do
      begin
        t:=f[i,j]-f[i,j-x]-f[i-x,j]+f[i-x,j-x];
        res:=max(t,res);
      end;
  writeln(res);
end.