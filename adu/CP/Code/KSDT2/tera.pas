uses windows;
type ma=array[0..1000100] of int64;
var n,l,time:longint;
    a,b:ma;

//tk nho nhat lon hon hoac bang
function tkn(x,d,c:longint):longint;
var vt,g:longint;
begin
  vt:=0;
  while d<=c do
    begin
       g:=(d+c) div 2;
       if x<=b[g] then
        begin
          vt:=g;
          c:=g-1;
        end
       else d:=g+1;
    end;
  exit(vt);
end;
//tk lon nhat nho hon hoac bang
function tkl(x,d,c:longint):longint;
var vt,g:longint;
begin
  vt:=0;
  while d<=c do
   begin
     g:=(d+c) div 2;
     if x>=b[g] then
      begin
        vt:=g;
        d:=g+1;
      end
     else c:=g-1;
   end;
  exit(vt);
end;

procedure sort(l,r: longint);
      var
         i,j,x,y: longint;
      begin
         i:=l;
         j:=r;
         x:=b[(l+r) div 2];
         repeat
           while b[i]<x do
            inc(i);
           while x<b[j] do
            dec(j);
           if not(i>j) then
             begin
                y:=b[i];
                b[i]:=b[j];
                b[j]:=y;
                inc(i);
                j:=j-1;
             end;
         until i>j;
         if l<j then
           sort(l,j);
         if i<r then
           sort(i,r);
      end;

procedure xl;
var i,j,u:longint;
    x:ma;kq:int64;
begin
   assign(input,'tera.inp');reset(input);
   assign(output,'tera.out');rewrite(output);
   readln(n,l);
   for i:=1 to n do read(x[i]);readln;
   for i:=1 to n do
     begin
       read(u);
       for j:=1 to n do
         a[(i-1)*n+j]:=u+x[j];
     end;
    readln;
   for i:=1 to n do read(x[i]);readln;
   for i:=1 to n do
     begin
       read(u);
       for j:=1 to n do
         b[(i-1)*n+j]:=u+x[j];
     end;
   sort(1,n*n);
//   for i:=1 to n*n do write(b[i],' ');
   for i:=1 to n*n do
     if (b[tkl(l-a[i],1,n*n)]=b[tkn(l-a[i],1,n*n)]) then kq:=kq+tkl(l-a[i],1,n*n)-tkn(l-a[i],1,n*n)+1;
   writeln(kq);
end;
begin
  xl;
end.