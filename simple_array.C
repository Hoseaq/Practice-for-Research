void simple_array()
{
  TCanvas* c1 = new TCanvas( "c1", "");
  double x[10];
  double y[10];
  for ( int i = 0; i<10; ++i )
    {
      x[i] = i;
      y[i] = i*i;
      cout<< x[i]<< " "<< y[i]<< endl;   
    }
  TGraph* tg = new TGraph( 10, x, y);
  tg -> SetMarkerStyle( kFullCircle);
  tg -> Draw( "ap");
  TF1* fun = new TF1( "fun", "pol2", 0, 10);
  tg -> Fit("fun", "R");
  c1 -> Print( "Simple_Array.png");
}  
    
