//need to remove final line from output
main(a,b,c){for(;~scanf("%d%d%d",&a,&b,&c);printf("%d %d\n",b<c?a+b-c:a,a>c?a-c:0));}