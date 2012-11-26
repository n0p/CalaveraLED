#include "C:\Users\n0p\Documents\My Dropbox\Calavera inti\main.h"
#include <stdlib.h>

int d_r = 0; // B1
int d_g = 0; // B2
int d_b = 0; // B3

int i_r = 0; // B5
int i_g = 0; // B4
int i_b = 0; // B6

int efecto = 0;

int counter = 1;

void reset_low()
{
	d_r = 0; // B1
	d_g = 0; // B2
	d_b = 0; // B3

	i_r = 0; // B5
	i_g = 0; // B4
	i_b = 0; // B6

	output_low(PIN_B1);
	output_low(PIN_B2);
	output_low(PIN_B3);
	output_low(PIN_B5);
	output_low(PIN_B4);
	output_low(PIN_B6);
}

void show_colors()
{
	counter = (counter + 1) % 255 + 1;
	
	if (counter > d_r) output_low(PIN_B1); else output_high(PIN_B1);
	if (counter > d_g) output_low(PIN_B2); else output_high(PIN_B2);
	if (counter > d_b) output_low(PIN_B3); else output_high(PIN_B3);
	if (counter > i_r) output_low(PIN_B5); else output_high(PIN_B5);
	if (counter > i_g) output_low(PIN_B4); else output_high(PIN_B4);
	if (counter > i_b) output_low(PIN_B6); else output_high(PIN_B6);
}

void show_colors2()
{
	if (d_r == 0) output_low(PIN_B1); else output_high(PIN_B1);
	if (d_g == 0) output_low(PIN_B2); else output_high(PIN_B2);
	if (d_b == 0) output_low(PIN_B3); else output_high(PIN_B3);
	if (i_r == 0) output_low(PIN_B5); else output_high(PIN_B5);
	if (i_g == 0) output_low(PIN_B4); else output_high(PIN_B4);
	if (i_b == 0) output_low(PIN_B6); else output_high(PIN_B6);	
}

void efecto_coloraos()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	//d_r = i_r = d_g = i_g = d_b = i_b = valor;
		d_r = valor;
		i_r = 50 - valor;
	
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}


void efecto_verdes()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	d_g = i_g = valor;
		
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}

void efecto_azules()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	d_b = i_b = valor;
		
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}

void efecto_azulverdes()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	d_g = i_g = i_b = d_b = valor;
		
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}

void efecto_coloraos2()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	d_r = i_r = valor;
		
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}

void efecto_blancos()
{
	static int subiendo = 1;
	static int valor = 1;
	static int c = 0;
	
	d_r = i_r = d_g = i_g = d_b = i_b = valor;
		
		c++;
		if (c == 150)
		{
			c = 0;
			
			valor += subiendo?1:-1;
			if (valor == 50) subiendo = 0;
			if (valor == 0) subiendo = 1;
		}
}

void efecto_random()
{
	static int c = 0;
	
		c++;
		if (c == 255)
		{
			c = 0;
		
			d_r = rand() % 100;
			d_g = rand() % 100;
			d_b = rand() % 100;
			i_r = rand() % 100;
			i_g = rand() % 100;
			i_b = rand() % 100;
		}
}

void efecto_subliminal()
{
// .-.. ..-. ...

	static int on = 1;
	static int off = 0;
	static long int corta = 150;
	static long int larga = 500;
	static long int pausa = 250;

	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;	
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(larga);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa+pausa);if (!input(PIN_A2)) return;
	
	
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);	if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(larga);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa+pausa);if (!input(PIN_A2)) return;
	
	
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa);if (!input(PIN_A2)) return;
	
	d_r = i_r = on;
	show_colors2();
	delay_ms(corta);if (!input(PIN_A2)) return;
	
	d_r = i_r = off;
	show_colors2();
	delay_ms(pausa+pausa);if (!input(PIN_A2)) return;
	
	
}


void main()
{
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);
//Setup_Oscillator parameter not selected from Intr Oscillotar Config tab

	reset_low();

	for (;;)
	{     
		switch (efecto)
		{
			case 0: efecto_coloraos(); break;
			case 1: efecto_coloraos2(); break;
			case 2: efecto_blancos(); break;
			case 3: efecto_verdes(); break;
			case 4: efecto_azules(); break;
			case 5: efecto_azulverdes(); break;
			case 6: efecto_random(); break;
			case 7: efecto_subliminal(); break;
		}
	
		if (!input(PIN_A2))
		{
			reset_low();
			delay_ms(1000);
			efecto = (efecto + 1) % 8;
		}
	
		show_colors();
	}

/*
   output_high(PIN_B1);
	delay_ms(1000);
   output_high(PIN_B2);
	delay_ms(1000);
   output_high(PIN_B3);
	delay_ms(1000);
   output_high(PIN_B4);
	delay_ms(1000);
   output_high(PIN_B5);
	delay_ms(1000);
   output_high(PIN_B6);
	delay_ms(1000);
*/
}
