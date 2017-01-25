  #include<stdio.h>
  int main()
  {
  float dif,iae,ine, ing,iag,difg,E,mtt,DF,T,TH;
    double G;
    printf("iae=");
  scanf("%f",&iae);
  printf("ine=");
  scanf("%f",&ine);
  dif=ine-iae;
  if(dif<125) {
      E = (dif - 125) * 4.179 + (125 * 1.779) + 131.10;
      printf("%f", E);
      E = (E * 0.07) + E;
      printf("%f", E);
  }
  else
  E=(dif*1.779)+131.10;

  printf("iag=");
  scanf("%f",&iag);
  printf("ing=");
  scanf("%f",&ing);
  dif=ing-iag;

  if(difg>1125){
    G=(difg-1125)*0.324+(1125*0.168)+85.5;
	printf("%f",G);
  }
	else
	G=(difg*0.168)+85.5;

  G=(G*0.07)+G;

  printf("entrer DF");
  scanf("%f",&DF);
  printf("entrer TH");
  scanf("%f",&TH);
  printf("entrer T");
  scanf("%f",&T);
  mtt=E+DF+TH+T;
  printf("mtt=%f",mtt);

  return 0;
 }