import java.util.*;;
class palindrome
{
    public void chkpal(int n)
    {
        int p,s=0,m=n;
        while(m>0)
        {
            p=m%10;
            s=s*10+p;
            s=s+0;
            m=m/10;
        }
        if(s==n)
        System.out.print("Palindrome Number");
        else
        System.out.print(" Not Palindrome Number");
        
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a Number:");
        int k= in.nextInt();
        palindrome ob = new palindrome();
        ob.chkpal(k);
    }
} 
