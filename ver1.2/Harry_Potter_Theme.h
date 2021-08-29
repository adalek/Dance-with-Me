struct MusicStruct {
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int A2 = 1100;
  int A2s = 1165;
  int B2 = 1234;
  int C3 = 1308;
  int C3s = 1385;
  int D3 = 1555;
}Music;

struct LengthStruct {
  float half = 0.5;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;
}Length;

int tempo = 400;

void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
  noTone(pin);
}

void Play_Harry_Potter_Theme(int buzzerPin) {
  setTone(buzzerPin, Music.B, tempo * Length.one);
  setTone(buzzerPin, Music.E, tempo * Length.one_half);
  setTone(buzzerPin, Music.G, tempo * Length.half);
  setTone(buzzerPin, Music.F, tempo * Length.one);
  setTone(buzzerPin, Music.E, tempo * Length.two);
  setTone(buzzerPin, Music.B2, tempo * Length.one);
  setTone(buzzerPin, Music.A2, tempo * Length.two_half);
  setTone(buzzerPin, Music.Fs, tempo * Length.two_half);
  
  setTone(buzzerPin, Music.E, tempo * Length.one_half);
  setTone(buzzerPin, Music.G, tempo * Length.half);
  setTone(buzzerPin, Music.F, tempo * Length.one);
  setTone(buzzerPin, Music.Ds, tempo * Length.two);
  setTone(buzzerPin, Music.F, tempo * Length.one);
  setTone(buzzerPin, Music.B, tempo * Length.two_half);
  delay(500);
  delay(1000);
}
