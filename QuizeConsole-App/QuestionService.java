import java.util.Scanner;

public class QuestionService {
    Question[] questions= new Question[4];
    String selection[] = new String[4];
    

    QuestionService()
    {
        questions[0]= new Question(1,"size of int","1","2","4","8","4");
        questions[1] = new Question(2,"size of double","1","2","4","8","8");
        questions[2]= new Question(2,"size of float","1","2","4","8","4");
        questions[3] = new Question(3,"size of long","1","2","4","8","8");
    }

    public void playQuize()
    {
        int i =0 ;
        Scanner sc = new Scanner(System.in);
       for(Question q:questions )
       {
        System.out.println("Question No: " + q.getId());
        System.out.println(q.getQuestion());
        System.out.println(q.getOpt1());
        System.out.println(q.getOpt2());
        System.out.println(q.getOpt3());
        System.out.println(q.getOpt4());
        System.out.println("Enter your answer");
        selection[i] = sc.nextLine();
        i++;
       }
       sc.close();

 
    }
    public void printScore()
    {
          int score = 0;
        for( int i =0; i <questions.length;i++ )
        {
            String answer=questions[i].getAnswer();
            String userchoose = selection[i];

            if(answer.equals(userchoose))
            {
                score ++;
            }
        }
        System.out.println("your score is: " + score);
    }
    
}
