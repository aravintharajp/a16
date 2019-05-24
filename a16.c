void main() 
{
   int i,j,a,c,count;
   scanf("%d%d",&c,&a);
   for(i=c+1;i<=a;i++)
   {
       count=0;
       for(j=2;j<=i;j++)
       {
       if(i%j==0)
       {
           break;
       }
       }
       if(j==i)
       {
           printf("%d ",i);
       }
   }
}
