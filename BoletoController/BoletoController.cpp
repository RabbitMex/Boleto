#include "pch.h"

#include "BoletoController.h"
using namespace System::IO;//clases para el flujo de entrada y salida
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace BoletoController;
//using namespace BoletoController::BoletoManager;

//void BoletoController::BoletoManager::AgregarPasajero(Pasajero^ pasajero)
void BoletoManager::AgregarPasajero(Pasajero^ pasajero)
//void AgregarPasajero(Pasajero^ pasajero)
{
    pasajeroDB->ListDB->Add(pasajero);
    pasajeroDB->GuardarEnArchivoBinario();
}

//void BoletoController::BoletoManager::ActualizarPasajero(Pasajero^ pasajero)
void BoletoManager::ActualizarPasajero(Pasajero^ pasajero)
{
    for (int i = 0; i < pasajeroDB->ListDB->Count; i++) {
        if (pasajeroDB->ListDB[i]->Dni == pasajero->Dni) {
            pasajeroDB->ListDB[i]->Nombre = pasajero->Nombre;
            pasajeroDB->ListDB[i]->Fecha_nacimiento = pasajero->Fecha_nacimiento;
            pasajeroDB->ListDB[i]->Genero = pasajero->Genero;
            pasajeroDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//void BoletoController::BoletoManager::EliminarPasajero(String^ dni)
void BoletoManager::EliminarPasajero(String^ dni)
{
    for (int i = 0; i < pasajeroDB->ListDB->Count; i++) {
        if ( pasajeroDB->ListDB[i]->Dni == dni) {
            //eliminar ese elemento
            pasajeroDB->ListDB->RemoveAt(i);
            pasajeroDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//Pasajero^ BoletoController::BoletoManager::BuscarPasajeroPorDni(String^ dni)
Pasajero^ BoletoManager::BuscarPasajeroPorDni(String^ dni)
{
    pasajeroDB->ExtraerDeArchivoBinario();
    for (int i = 0; i < pasajeroDB->ListDB->Count; i++) {
        if (pasajeroDB->ListDB[i]->Dni == dni) {
            return pasajeroDB->ListDB[i];
        }
    }
}

//List<Pasajero^>^ BoletoController::BoletoManager::MostrarTodosPasajeros()
List<Pasajero^>^ BoletoManager::MostrarTodosPasajeros()
{
    pasajeroDB->ExtraerDeArchivoBinario();
    return pasajeroDB->ListDB;
}

//void BoletoController::BoletoManager::AgregarConductor(Conductor^ conductor)
void BoletoManager::AgregarConductor(Conductor^ conductor)
{
    conductorDB->ListDB->Add(conductor);
    conductorDB->GuardarEnArchivoBinario();
}

//void BoletoController::BoletoManager::ActualizarConductor(Conductor^ conductor)
void BoletoManager::ActualizarConductor(Conductor^ conductor)
{
    for (int i = 0; i < conductorDB->ListDB->Count; i++) {
        if (conductorDB->ListDB[i]->Dni == conductor->Dni) {

            conductorDB->ListDB[i]->Nombre = conductor->Nombre;
            conductorDB->ListDB[i]->Direccion = conductor->Direccion;
            conductorDB->ListDB[i]->Salario = conductor->Salario;
            conductorDB->ListDB[i]->Contrasenha = conductor->Contrasenha;
            conductorDB->ListDB[i]->Anho_experiencia = conductor->Anho_experiencia;
            conductorDB->ListDB[i]->Numero_telefono = conductor->Numero_telefono;
            conductorDB->ListDB[i]->Numero_licencia = conductor->Numero_licencia;
            conductorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//void BoletoController::BoletoManager::EliminarConductor(String^ dni)
void BoletoManager::EliminarConductor(String^ dni)
{
    for (int i = 0; i < conductorDB->ListDB->Count; i++) {
        if (conductorDB->ListDB[i]->Dni == dni) {
            //eliminar ese elemento
            conductorDB->ListDB->RemoveAt(i);
            conductorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//Conductor^ BoletoController::BoletoManager::BuscarConductorPorDni(String^ dni)
Conductor^ BoletoManager::BuscarConductorPorDni(String^ dni)
{
    conductorDB->ExtraerDeArchivoBinario();
    for (int i = 0; i < conductorDB->ListDB->Count; i++) {
        if (conductorDB->ListDB[i]->Dni == dni) {
            return conductorDB->ListDB[i];
        }
    }
}

//List<Conductor^>^ BoletoController::BoletoManager::MostrarTodosConductores()
List<Conductor^>^ BoletoManager::MostrarTodosConductores()
{
    conductorDB->ExtraerDeArchivoBinario();
    return conductorDB->ListDB;
}

//void BoletoController::BoletoManager::AgregarVendedor(Vendedor^ vendedor)
void BoletoManager::AgregarVendedor(Vendedor^ vendedor)
{
    vendedorDB->ListDB->Add(vendedor);
    vendedorDB->GuardarEnArchivoBinario();
}

//void BoletoController::BoletoManager::ActualizarVendedor(Vendedor^ vendedor)
void BoletoManager::ActualizarVendedor(Vendedor^ vendedor)
{
    for (int i = 0; i < vendedorDB->ListDB->Count; i++) {
        if (vendedorDB->ListDB[i]->Dni == vendedor->Dni) {

            vendedorDB->ListDB[i]->Nombre = vendedor->Nombre;
            vendedorDB->ListDB[i]->Direccion = vendedor->Direccion;
            vendedorDB->ListDB[i]->Salario = vendedor->Salario;
            vendedorDB->ListDB[i]->Contrasenha = vendedor->Contrasenha;
            vendedorDB->ListDB[i]->Email = vendedor->Email;
            vendedorDB->ListDB[i]->Centro_estudios = vendedor->Centro_estudios;
            vendedorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//void BoletoController::BoletoManager::EliminarVendedor(String^ dni)
void BoletoManager::EliminarVendedor(String^ dni)
{
    for (int i = 0; i < vendedorDB->ListDB->Count; i++) {
        if (vendedorDB->ListDB[i]->Dni == dni) {
            //eliminar ese elemento
            vendedorDB->ListDB->RemoveAt(i);
            vendedorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//Vendedor^ BoletoController::BoletoManager::BuscarVendedorPorDni(String^ dni)
Vendedor^ BoletoManager::BuscarVendedorPorDni(String^ dni)
{
    vendedorDB->ExtraerDeArchivoBinario();
    for (int i = 0; i < vendedorDB->ListDB->Count; i++) {
        if (vendedorDB->ListDB[i]->Dni == dni) {
            return vendedorDB->ListDB[i];
        }
    }
}

//List<Vendedor^>^ BoletoController::BoletoManager::MostrarTodosVendedores()
List<Vendedor^>^ BoletoManager::MostrarTodosVendedores()
{
    vendedorDB->ExtraerDeArchivoBinario();
    return vendedorDB->ListDB;
}

//void BoletoController::BoletoManager::AgregarAdministrador(Administrador^ administrador)
void BoletoManager::AgregarAdministrador(Administrador^ administrador)
{
    administradorDB->ListDB->Add(administrador);
    administradorDB->GuardarEnArchivoBinario();
}

//void BoletoController::BoletoManager::ActualizarAdministrador(Administrador^ administrador)
void BoletoManager::ActualizarAdministrador(Administrador^ administrador)
{
    for (int i = 0; i < administradorDB->ListDB->Count; i++) {
        if (administradorDB->ListDB[i]->Dni == administrador->Dni) {
            administradorDB->ListDB[i]->Nombre = administrador->Nombre;
            administradorDB->ListDB[i]->Direccion = administrador->Direccion;
            administradorDB->ListDB[i]->Salario = administrador->Salario;
            administradorDB->ListDB[i]->Contrasenha = administrador->Contrasenha;
            administradorDB->ListDB[i]->Fecha_nacimiento = administrador->Fecha_nacimiento;
            administradorDB->ListDB[i]->Numero_telefono = administrador->Numero_telefono;
            administradorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//void BoletoController::BoletoManager::EliminarAdministrador(String^ dni)
void BoletoManager::EliminarAdministrador(String^ dni)
{
    for (int i = 0; i < administradorDB->ListDB->Count; i++) {
        if (administradorDB->ListDB[i]->Dni == dni) {
            //eliminar ese elemento
            administradorDB->ListDB->RemoveAt(i);
            administradorDB->GuardarEnArchivoBinario();
            break;
        }
    }
}

//Administrador^ BoletoController::BoletoManager::BuscarAdministradorPorDni(String^ dni)
Administrador^ BoletoManager::BuscarAdministradorPorDni(String^ dni)
{
    administradorDB->ExtraerDeArchivoBinario();
    for (int i = 0; i < administradorDB->ListDB->Count; i++) {
        if (administradorDB->ListDB[i]->Dni == dni) {
            return administradorDB->ListDB[i];
        }
    }
}

//List<Administrador^>^ BoletoController::BoletoManager::MostrarTodosAdministradores()
List<Administrador^>^ BoletoManager::MostrarTodosAdministradores()
{
    administradorDB->ExtraerDeArchivoBinario();
    return administradorDB->ListDB;
}

//void BoletoController::PasajeroDB::GuardarEnArchivoBinario()
void PasajeroDB::GuardarEnArchivoBinario()
{
    Stream^ stream = File::Open("pasajero.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDB);
    stream->Close();
}

//void BoletoController::PasajeroDB::ExtraerDeArchivoBinario()
void PasajeroDB::ExtraerDeArchivoBinario()
{
    //Primero verificar si el archivo existe
    if (File::Exists("pasajero.bin")) {
        Stream^ stream = File::Open("pasajero.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        ListDB = (List<Pasajero^>^) bFormatter->Deserialize(stream);
        stream->Close();
    }
}

//void BoletoController::VendedorDB::GuardarEnArchivoBinario()
void VendedorDB::GuardarEnArchivoBinario()
{
    Stream^ stream = File::Open("vendedor.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDB);
    stream->Close();
}

//void BoletoController::VendedorDB::ExtraerDeArchivoBinario()
void VendedorDB::ExtraerDeArchivoBinario()
{
    //Primero verificar si el archivo existe
    if (File::Exists("vendedor.bin")) {
        Stream^ stream = File::Open("vendedor.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        ListDB = (List<Vendedor^>^) bFormatter->Deserialize(stream);
        stream->Close();
    }
}

//void BoletoController::ConductorDB::GuardarEnArchivoBinario()
void ConductorDB::GuardarEnArchivoBinario()
{
    Stream^ stream = File::Open("conductor.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDB);
    stream->Close();
}

//void BoletoController::ConductorDB::ExtraerDeArchivoBinario()
void ConductorDB::ExtraerDeArchivoBinario()
{
    //Primero verificar si el archivo existe
    if (File::Exists("conductor.bin")) {
        Stream^ stream = File::Open("conductor.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        ListDB = (List<Conductor^>^) bFormatter->Deserialize(stream);
        stream->Close();
    }
}

//void BoletoController::AdministradorDB::GuardarEnArchivoBinario()
void AdministradorDB::GuardarEnArchivoBinario()
{
    Stream^ stream = File::Open("administrador.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDB);
    stream->Close();
}

//void BoletoController::AdministradorDB::ExtraerDeArchivoBinario()
void AdministradorDB::ExtraerDeArchivoBinario()
{
    //Primero verificar si el archivo existe
    if (File::Exists("administrador.bin")) {
        Stream^ stream = File::Open("administrador.bin", FileMode::Open);
        BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
        ListDB = (List<Administrador^>^) bFormatter->Deserialize(stream);
        stream->Close();
    }
}
