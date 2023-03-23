#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace BoletoModel;

namespace BoletoController {
	public ref class PasajeroDB
	{
	public:
		List<Pasajero^>^ ListDB = gcnew List<Pasajero^>();
	};

	public ref class VendedorDB
	{
	public:
		List<Vendedor^>^ ListDB = gcnew List<Vendedor^>();
	};

	public ref class ConductorDB
	{
	public:
		List<Conductor^>^ ListDB = gcnew List<Conductor^>();
	};

	public ref class AdministradorDB
	{
	public:
		List<Administrador^>^ ListDB = gcnew List<Administrador^>();
	};

	public ref class BoletoManager
	{
	private:
		static PasajeroDB^ pasajeroDB = gcnew PasajeroDB();
		static VendedorDB^ vendedorDB = gcnew VendedorDB();
		static ConductorDB^ conductorDB = gcnew ConductorDB();
		static AdministradorDB^ administradorDB = gcnew AdministradorDB();
	public:
		static void AgregarPasajero(Pasajero^);
		static void ActualizarPasajero(Pasajero^);
		static void EliminarPasajero(String^ dni);
		static Pasajero^ BuscarPasajeroPorDni(String^ dni);
		static List<Pasajero^>^ MostrarTodosPasajeros();
		
		static void AgregarConductor(Conductor^);
		static void ActualizarConductor(Conductor^);
		static void EliminarConductor(String^ dni);
		static Conductor^ BuscarConductorPorDni(String^ dni);
		static List<Conductor^>^ MostrarTodosConductores();

		static void AgregarVendedor(Vendedor^);
		static void ActualizarVendedor(Vendedor^);
		static void EliminarVendedor(String^ dni);
		static Vendedor^ BuscarVendedorPorDni(String^ dni);
		static List<Vendedor^>^ MostrarTodosVendedores();

		static void AgregarAdministrador(Administrador^);
		static void ActualizarAdministrador(Administrador^);
		static void EliminarAdministrador(String^ dni);
		static Administrador^ BuscarAdministradorPorDni(String^ dni);
		static List<Administrador^>^ MostrarTodosAdministradores();
	
	};

}
