// Déclarations LCD
sbit LCD_RS at RB2_bit;
sbit LCD_EN at RB3_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISB2_bit;
sbit LCD_EN_Direction at TRISB3_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;

char txt[16];
unsigned int adc_value;
float v_adc, v_real;
void main() {
     ADCON1 = 0x80;     // Configure AN0 comme entrée analogique, Vref = VDD
     TRISA = 0xFF;      // Configure PORTA comme entrée
     TRISD = 0x00;      // PORTD en sortie (LCD)
     Lcd_Init();        // Initialise le LCD
     Lcd_Cmd(_LCD_CLEAR);
     Lcd_Cmd(_LCD_CURSOR_OFF);

     while (1) {
          adc_value = ADC_Read(0);          // Lecture ADC sur AN0
          v_adc = adc_value * 5.0 / 1024.0; // Conversion en tension (0-5V)
          v_real = v_adc * 12.0;            // Calcul de la vraie tension (0-60V)

          FloatToStr(v_real, txt);          // Conversion float en texte
          Lcd_Out(1, 1, "Vin=") ;
          Lcd_Out(1, 5, txt);
          Lcd_Out(1, 14, "V");
          Delay_ms(500);
     }
}