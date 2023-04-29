float calcular_promedio(Tvec v[], int cant)
{
   int suma = 0;
   int i;
   float promedio = 0;
   for (i = 0; i < cant; i++)
      suma += v[i];

   return cant >= 0 ? suma/cant : 0;
}