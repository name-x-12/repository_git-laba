

int main(){
    srand(static_cast<unsigned int>(time(0)));
    cout<<"Сыграем в игру 'Угадай число(быки и коровы)'\n";
    cout<<("Выберите диапозон случайного числа: \n");
    int start,end;
    cout<<"start: ";
    cin>>start;
    
    cout<<"end: ";
    cin>>end;

    int R_Number=RandomNumber(start,end);
    int userNum=0;
    cout<<"Я загадал число от "<<start<<" до "<<end<<". Угадай его."<<endl;

    while(userNum!=R_Number){
        userNum=GetUserInput();
        Check(R_Number,userNum);
    }    

    return 0;
}
