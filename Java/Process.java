import java.io.*;

public class Process{
	public static void main(String[] args) throws IOException
	{
		if(args.length !=1){
			System.err.println("Usage: java OSProcess <command>");
			System.exit(0);
		}

		//args[0] é o commando
		ProcessBuilder pb = new ProcessBuilder(args[0]);
		Process proc = pb.start();

		// Obtem a entrada do sistema
		InputStream is = proc.getInputStream();
		InputStreamReader isr = new InputStreamReader(is);

		BufferedReader br = new BufferedReader(isr);

		// Lendo o retorno do comando
		String line;
		
		while((line = br.readLine())!= null)
			System.out.println(line);
		
		br.close();
		
	}
}
