#include<stdio.h>
int main(){
    int subjects;
    int i;
    char Answer;
    int attempts = 2;
    int score = 0;
    
    printf("\nWelcome to Samuel N Henry Jr quiz!\n\n");
    
    printf("1.Math\n");
    printf("2.Science\n");
    printf("3.English\n");
    printf("4.History\n");
    printf("5.Bible\n");
    
    printf("Select the subject you want to quiz in:");
    scanf("%d",&subjects);
    
    while(subjects < 1 || subjects > 5){
        printf("Error! please select from(1-5):");
        scanf("%d",&subjects);
    }
    
    switch(subjects){
        case 1: printf("\nYou choose Math!\n\n");    break;
        case 2: printf("\nYou choose Science!\n\n"); break;
        case 3: printf("\nYou choose English!\n\n"); break;
        case 4: printf("\nYou choose History!\n\n"); break;
        case 5: printf("\nYou choose Bible!\n\n");   break;
    }
    
    /* ==================== MATH ==================== */
    if(subjects == 1){
        printf("Each question is worth 20 marks. Your final score appears at the end.\n");
        printf("(Note: You only have two attempts on each question.)\n\n");
        
        printf("1. What is 15 x 4?\n");
        printf("A) 45\nB) 50\nC) 60\nD) 70\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("2. What is the value of sqrt(169)?\n");
        printf("A) 11\nB) 14\nC) 13\nD) 15\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("3. Solve: 30 / 5\n");
        printf("A) 5\nB) 7\nC) 6\nD) 8\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("4. What is 20 percent of 50?\n");
        printf("A) 5\nB) 10\nC) 15\nD) 20\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='B' || Answer=='b'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("5. What is the perimeter of a square with side 9 cm?\n");
        printf("A) 27 cm\nB) 36 cm\nC) 18 cm\nD) 45 cm\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='B' || Answer=='b'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        if(score >= 60){
            printf("Congratulations! Your score: %d/100\n", score);
        }else{
            printf("Keep it up! Your score: %d/100\n", score);
        }
    }
    
    /* ==================== SCIENCE ==================== */
    else if(subjects == 2){
        printf("Each question is worth 20 marks. Your final score appears at the end.\n");
        printf("(Note: You only have two attempts on each question.)\n\n");
        
        printf("1. What planet is known as the Red Planet?\n");
        printf("A) Earth\nB) Venus\nC) Mars\nD) Jupiter\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("2. What gas do plants absorb from the atmosphere?\n");
        printf("A) Oxygen\nB) Nitrogen\nC) Hydrogen\nD) Carbon dioxide\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("3. Which organ in the human body pumps blood?\n");
        printf("A) Brain\nB) Lungs\nC) Heart\nD) Kidney\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("4. What is the boiling point of water (at sea level)?\n");
        printf("A) 50 C\nB) 90 C\nC) 100 C\nD) 120 C\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("5. Which force pulls objects toward the Earth?\n");
        printf("A) Magnetism\nB) Friction\nC) Electricity\nD) Gravity\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        if(score >= 60){
            printf("Congratulations! Your score: %d/100\n", score);
        }else{
            printf("Keep it up! Your score: %d/100\n", score);
        }
    }
    
    /* ==================== ENGLISH ==================== */
    else if(subjects == 3){
        printf("Each question is worth 20 marks. Your final score appears at the end.\n");
        printf("(Note: You only have two attempts on each question.)\n\n");
        
        printf("1. Choose the correct spelling:\n");
        printf("A) Recieve\nB) Receive\nC) Receve\nD) Recaive\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='B' || Answer=='b'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("2. Which word is a noun?\n");
        printf("A) Quickly\nB) Run\nC) Blue\nD) Happiness\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("3. Choose the correct sentence:\n");
        printf("A) He don't like apples.\nB) He doesn't likes apples.\nC) He doesn't like apples.\nD) He don't likes apples.\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("4. What is the opposite of hot?\n");
        printf("A) Warm\nB) Cold\nC) Heat\nD) Fire\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='B' || Answer=='b'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("5. Choose the correct plural of 'child':\n");
        printf("A) Childs\nB) Childes\nC) Children\nD) Childrens\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        if(score >= 60){
            printf("Congratulations! Your score: %d/100\n", score);
        }else{
            printf("Keep it up! Your score: %d/100\n", score);
        }
    }
    
    /* ==================== HISTORY ==================== */
    else if(subjects == 4){
        printf("Each question is worth 20 marks. Your final score appears at the end.\n");
        printf("(Note: You only have two attempts on each question.)\n\n");
        
        printf("1. Who was the first President of the United States?\n");
        printf("A) Abraham Lincoln\nB) Thomas Jefferson\nC) George Washington\nD) John Adams\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("2. In which year did World War II end?\n");
        printf("A) 1939\nB) 1942\nC) 1945\nD) 1950\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("3. Who discovered America in 1492?\n");
        printf("A) Vasco da Gama\nB) Marco Polo\nC) Christopher Columbus\nD) Ferdinand Magellan\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("4. The Great Wall is located in which country?\n");
        printf("A) India\nB) Japan\nC) Korea\nD) China\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("5. Who was the first man to walk on the Moon?\n");
        printf("A) Buzz Aldrin\nB) Yuri Gagarin\nC) Michael Collins\nD) Neil Armstrong\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            /* FIX: message said "10 marks" but score added 20 — corrected message */
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        if(score >= 60){
            printf("Congratulations! Your score: %d/100\n", score);
        }else{
            printf("Keep it up! Your score: %d/100\n", score);
        }
    }
    
    /* ==================== BIBLE ==================== */
    else if(subjects == 5){
        printf("Each question is worth 20 marks. Your final score appears at the end.\n");
        printf("(Note: You only have two attempts on each question.)\n\n");
        
        /* FIX: duplicate "A) Moses" label fixed; loop was i<attempts (missing last attempt) */
        printf("1. Who built the ark in the Bible?\n");
        printf("A) Moses\nB) Abraham\nC) Noah\nD) David\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("2. How many days did God take to create the world?\n");
        printf("A) 5 days\nB) 6 days\nC) 7 days\nD) 10 days\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='B' || Answer=='b'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        /* FIX: missing & in scanf — was scanf(" %c", Answer), now scanf(" %c", &Answer) */
        printf("3. Who was swallowed by a great fish?\n");
        printf("A) Peter\nB) Paul\nC) Jonah\nD) Job\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='C' || Answer=='c'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("4. What was the first miracle of Jesus?\n");
        printf("A) Healing the blind\nB) Feeding 5,000\nC) Walking on water\nD) Turning water into wine\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        printf("5. Who led the Israelites out of Egypt?\n");
        printf("A) Joseph\nB) Joshua\nC) Aaron\nD) Moses\n");
        for(i=1; i<=attempts; i++){
            printf("Enter Your Answer: ");
            scanf(" %c",&Answer);
            if(Answer=='D' || Answer=='d'){
                printf("Yes! 20 marks.\n\n");
                score = score + 20;
                break;
            }else if(i < attempts){
                printf("Oops! Try again.\n");
            }else{
                printf("Wrong! Out of attempts. 0 marks.\n\n");
            }
        }
        
        if(score >= 60){
            printf("Congratulations! Your score: %d/100\n", score);
        }else{
            printf("Keep it up! Your score: %d/100\n", score);
        }
    }
    
    return 0;
}