#include <main.h>


int main(int argc, char *argv[]) {

  t_log* logger_memoria = iniciar_logger_modulo(MEMORIA_LOGGER);

  log_info(logger_memoria, "Esto es la memoria D:");  

  t_config* memoria_config = config_create(argv[1]);
  configuracion_memoria = obtener_valores_de_configuracion_memoria(memoria_config);
  mostrar_valores_de_configuracion_memoria(configuracion_memoria);



  log_destroy(logger_memoria);
  config_destroy(memoria_config);
    
  return 0;
}