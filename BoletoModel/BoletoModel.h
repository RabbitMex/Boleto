#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace BoletoModel {
    [Serializable]
    public ref class Trabajador
    {
    private:
        /* data */
    public:
        property String^ Dni;
        property String^ Nombre;
        property String^ Direccion;
        property double Salario;
        property String^ Contrasenha;
    };
    [Serializable]
    public ref class Pasajero
    {
    private:
        /* data */
    public:
        property String^ Dni;
        property String^ Nombre;
        property DateTime Fecha_nacimiento;
        property String^ Genero;
    };
    [Serializable]
    public ref class Producto
    {
    private:
        /* data */
    public:
        property int Codigo;
        property String^ Nombre;
        property double Precio;
        property int Stock;
        property String^ Descripcion;
    };
    [Serializable]
    public ref class Vendedor : public Trabajador
    {
    private:
        /* data */
    public:
        property String^ Email;
        property String^ Centro_estudios;
    };
    [Serializable]
    public ref class Conductor : public Trabajador
    {
    private:
        /* data */
    public:
        property int Anho_experiencia;
        property String^ Numero_telefono;
        property int Numero_licencia;
    };
    [Serializable]
    public ref class Administrador : public Trabajador
    {
    private:
        /* data */
    public:
        property DateTime Fecha_nacimiento;
        property String^ Numero_telefono;
    };
    [Serializable]
    public ref class Viaje
    {
    private:
        /* data */
    public:
        property int codigo;
        property String^ Origen;
        property String^ Destino;
        property DateTime Fecha_viaje;
        property DateTime Hora_viaje;
        property Conductor^ Conductor;
        property int Numero_asientos;
    };
    [Serializable]
    public ref class Detalle_producto
    {
    private:
        /* data */
    public:
        property int Cantidad;
        property double SubTotal;
        property Producto^ Producto;
    };
    [Serializable]
    public ref class Boleto
    {
    private:
        /* data */
    public:
        property int Codigo;
        property int Numero_asiento;
        property DateTime Fecha_compra;
        property double Total;
        property String^ estado;
        property Pasajero^ Pasajero;
        property Vendedor^ Vendedor;
        property Viaje^ Viaje;
        property List<Detalle_producto^>^ Lista_productos;
    };
}
