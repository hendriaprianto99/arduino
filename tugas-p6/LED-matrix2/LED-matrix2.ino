#include <LedControl.h>

LedControl lc = LedControl(12, 10, 11, 1); // Urutannya DIN, CLK, CS, NRDEV

// waktu tunggu yang di deklarasikan oleh variable global
unsigned long waktutunggu = 50;

int col;
int row;
int address;

void setup() {
  // jumlah perangkat yang telah dirangkai antara arduino dengan dot matrix
  int devices = lc.getDeviceCount();

  // inisialisasi semua perangkat (didalam void loop)
  address = 0;
  
  // IC MAX72XX berada dalam mode sleep saat startup
  lc.shutdown(address, false);

  //atur kecerahan ke tingkat menengah
  lc.setIntensity(address, 2);

  // kosongkan data di dotmatrix (clear display)
  lc.clearDisplay(address);
}

void loop() {
  // baca jumlah perangkat
  int devices = lc.getDeviceCount();
  // perulangan pertama untuk mengisi data satu persatu
  for(row=00; row<8; row++){
    for(col=00; col<8; col++){
      for(address=00; address<devices; address++){
        lc.setLed(address, row, col, true);
        delay(waktutunggu);
      }
    }
  }

  // perulangan pertama untuk pengosongan data satu persatu
  for(row=00; row<8; row++){
    for(col=00; col<8; col++){
      for(address=00; address<devices; address++){
        lc.setLed(address, row, col, false);
        delay(waktutunggu);
      }
    }
  }
  
}
