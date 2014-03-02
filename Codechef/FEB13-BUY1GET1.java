import java.io.BufferedReader;
import java.io.InputStreamReader;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author nainy
 */
public class Main {
    public static void main(String args[])throws Exception
	{
            try
	    {    
                int n;
                String s="";
                int c[]=new int[52];
                
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
                int t=Integer.parseInt(br.readLine());
                while(t>0)
                {
                    for(int i=0;i<52;i++)
                           c[i]=0;
                    s=br.readLine();
                    for(int i=0;i<s.length();i++)
                    {
                        if(s.charAt(i)<='Z')
                            c[s.charAt(i)-'A']++;
                        else
                            c[s.charAt(i)-'a'+26]++;
                    }
                        //c[s.charAt(i)-'a']
                       
                    int sum=0;
                    for(int i=0;i<52;i++)
                    {
                        if(c[i]>0)
                        {
                            if(c[i]%2==0)
                               sum+=c[i]/2;
                            else
                            sum+=(c[i]+2)/2;
                        }
                    }
                    System.out.println(sum);
                    t--;
                }
                
	}
            catch(Exception e)
            {
                    }
        }
    
}