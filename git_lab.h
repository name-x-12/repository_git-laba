//рандомное число
int RandomNumber(int start,int end){
    int number=rand()%(end-start+1)+start;
    return number;
}


//считывание ответа
int GetUserInput(){
    int num;
    cout<<"Введите ваше предложение: ";
    cin>>num;
    return num;
}


//проверка ответа
void Check(int RandomNumber,int UserNum){
    if(UserNum<RandomNumber) cout<<"Загаданное число больше. "<<endl;
    else if(UserNum>RandomNumber) cout<<"Загаданное число меньше. "<<endl;
    else cout<<"Вы угадали!"<<endl;
}

//d
