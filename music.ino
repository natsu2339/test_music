const int loudspeaker_pin = 13; // 13番ポートを使う
const int base_time = 16 * 80;  // 16の倍数が都合がいい

void setup()
{
  pinMode(loudspeaker_pin, OUTPUT); // 使うIOポートを出力に指定
}

void loop()
{tone(loudspeaker_pin, 698);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 587);
delay(base_time / 8);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 587);
delay(base_time / 8);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 8);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 1047);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time / 4);
tone(loudspeaker_pin, 1047);
delay(base_time / 2);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 1175);
delay(base_time / 8);
tone(loudspeaker_pin, 1047);
delay(base_time / 8);
tone(loudspeaker_pin, 880);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time / 4);
tone(loudspeaker_pin, 784);
delay(base_time * 3 / 2 / 4);
tone(loudspeaker_pin, 880);
delay(base_time / 8);
tone(loudspeaker_pin, 587);
delay(base_time / 4);
tone(loudspeaker_pin, 523);
delay(base_time / 4);
tone(loudspeaker_pin, 698);
delay(base_time * 3 / 2 / 2);
noTone(loudspeaker_pin);
delay(base_time / 1);
noTone(loudspeaker_pin);
delay(base_time / 1);

}


