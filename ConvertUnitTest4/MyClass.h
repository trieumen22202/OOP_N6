#pragma once
using namespace System;
using namespace System::Collections::Generic;

public ref class length {
private:
    String^ nameOfUnit;
    double value;

public:
    length() {
        nameOfUnit = gcnew String("");
        value = 0;
    }

    length(String^ NameOfUnit, double Value) {
        nameOfUnit = String::Copy(NameOfUnit);
        value = Value;
    }

    String^ getNameOfUnit() {
        return nameOfUnit;
    }

    void setNameOfUnit(String^ NameOfUnit) {
        nameOfUnit = String::Copy(NameOfUnit);
    }

    double getValue() {
        return value;
    }

    void setValue(double Value) {
        value = Value;
    }

    double convertToMeters(String^ NameOfUnit, double Value) {
        if (NameOfUnit == "kilometers") {
            return Value * 1000;
        }
        else if (NameOfUnit == "meters") {
            return Value / 1;
        }
        else if (NameOfUnit == "decimeters") {
            return Value / 10;
        }
        else if (NameOfUnit == "centimeter") {
            return Value / 100;
        }
        else if (NameOfUnit == "milimeters") {
            return Value / 1000;
        }
        else if (NameOfUnit == "nanometers") {
            return Value / 1e9;
        }
        else if (NameOfUnit == "inches") {
            return Value / 39.37008;
        }
        else if (NameOfUnit == "feet") {
            return Value / 3.28084;
        }
        else if (NameOfUnit == "yards") {
            return Value / 1.093613;
        }
        else if (NameOfUnit == "miles")
            return Value / 6.21371e-4;
        else
            // Handle other cases or provide a default value
            return 0;
    }


    double calculate(String^ NameOfUnit1, String^ NameOfUnit2, double ValueOfUnit1) {
        double value1 = convertToMeters(NameOfUnit1, ValueOfUnit1);
        double value2 = convertToMeters(NameOfUnit2, 1);

        return value1 / value2;
    }
};
public ref class volume {
private:
    String^ nameOfUnit;
    double value;


public:
    volume() {
        nameOfUnit = gcnew String("");
        value = 0;
    }


    volume(String^ NameOfUnit, double Value) {
        nameOfUnit = String::Copy(NameOfUnit);
        value = Value;
    }


    String^ getNameOfUnit() { return nameOfUnit; }
    void setNameOfUnit(String^ NameOfUnit) {
        nameOfUnit = String::Copy(NameOfUnit);
    }


    double getValue() { return value; }
    void setValue(double Value) {
        value = Value;
    }
    double convertToCubicMeter(String^ NameOfUnit, double Value) {
        if (NameOfUnit == "Cubic Meter") {
            return Value / 1;
        }
        else if (NameOfUnit == "Cubic Kilometer") {
            return Value / 1e-9;
        }
        else if (NameOfUnit == "Decaliter") {
            return Value / 0.1;
        }
        else if (NameOfUnit == "Centiliter") {
            return Value / 10000;
        }
        else if (NameOfUnit == "Cubic Centimeter" || NameOfUnit == "Mililiter") {
            return Value / 1000000;
        }
        else if (NameOfUnit == "Cubic Milimeter" || NameOfUnit == "Viroliter") {
            return Value / 1e9;
        }
        else if (NameOfUnit == "Cubic Yard")
            return Value / 1.31;
        else if (NameOfUnit == "Cubic Foot")
            return Value / 35.31;
        else if (NameOfUnit == "Gallon")
            return Value / 264.17;
        else if (NameOfUnit == "Cubic Inch")
            return Value / 61023.76;
        else {
            return Value / 1;
        }
    }


    double calculate(String^ NameOfUnit1, String^ NameOfUnit2, double ValueOfUnit1) {
        return convertToCubicMeter(NameOfUnit1, ValueOfUnit1) / convertToCubicMeter(NameOfUnit2, 1);
    }
};

public ref class area {
private:
    String^ nameOfUnit;
    double value;


public:
    area() {
        nameOfUnit = gcnew String("");
        value = 0;
    }


    area(String^ NameOfUnit, double Value) {
        nameOfUnit = String::Copy(NameOfUnit);
        value = Value;
    }


    String^ getNameOfUnit() { return nameOfUnit; }
    void setNameOfUnit(String^ NameOfUnit) {
        nameOfUnit = String::Copy(NameOfUnit);
    }


    double getValue() { return value; }
    void setValue(double Value) {
        value = Value;
    }
    double convertToSquareMeter(String^ NameOfUnit, double Value) {
        if (NameOfUnit == "square meter") {
            return Value / 1;
        }
        else if (NameOfUnit == "square kilometer") {
            return Value / 1e-6;
        }
        else if (NameOfUnit == "hecta") {
            return Value / 1e-4;
        }
        else if (NameOfUnit == "acres") {
            return Value / 0.000247105;
        }
        else if (NameOfUnit == "square decimeter") {
            return Value / 100;
        }
        else if (NameOfUnit == "square centimeter") {
            return Value / 10000;
        }
        else if (NameOfUnit == "square milimeter")
            return Value / 1000000;
        else if (NameOfUnit == "square hectares")
            return Value / 0.0001;
        else if (NameOfUnit == "square inch")
            return Value / 1550.003;
        else if (NameOfUnit == "square feet")
            return Value / 10.76391;
        else if (NameOfUnit == "square yards")
            return Value / 1.19599;
        else if (NameOfUnit == "square miles")
            return Value / 0.000000386102159;
        else {
            return Value / 1;
        }
    }


    double calculate(String^ NameOfUnit1, String^ NameOfUnit2, double ValueOfUnit1) {
        return convertToSquareMeter(NameOfUnit1, ValueOfUnit1) / convertToSquareMeter(NameOfUnit2, 1);
    }
};


public ref class weightAndMass {
private:
    String^ nameOfUnit;
    double value;


public:
    weightAndMass() {
        nameOfUnit = gcnew String("");
        value = 0;
    }


    weightAndMass(String^ NameOfUnit, double Value) {
        nameOfUnit = String::Copy(NameOfUnit);
        value = Value;
    }


    String^ getNameOfUnit() { return nameOfUnit; }
    void setNameOfUnit(String^ NameOfUnit) {
        nameOfUnit = String::Copy(NameOfUnit);
    }


    double getValue() { return value; }
    void setValue(double Value) {
        value = Value;
    }
    double convertToGrams(String^ NameOfUnit, double Value) {
        if (NameOfUnit == "grams") {
            return Value / 1;
        }
        else if (NameOfUnit == "carats") {
            return Value / 5;
        }
        else if (NameOfUnit == "miligrams") {
            return Value / 1000;
        }
        else if (NameOfUnit == "centigrams") {
            return Value / 100;
        }
        else if (NameOfUnit == "decigrams") {
            return Value / 10;
        }
        else if (NameOfUnit == "dekgrams") {
            return Value / 0.1;
        }
        else if (NameOfUnit == "hectograms")
            return Value / 0.01;
        else if (NameOfUnit == "kilograms")
            return Value / 0.001;
        else if (NameOfUnit == "metric tonnes")
            return Value / 1e-6;
        else if (NameOfUnit == "ounces")
            return Value / 0.035274;
        else if (NameOfUnit == "pounds")
            return Value / 0.00220462;
        else if (NameOfUnit == "stone")
            return Value / 1.57473e-5;
        else if (NameOfUnit == "short tons(us)")
            return Value / 1.10231e-7;
        else if (NameOfUnit == "long tons(uk)")
            return Value / 9.84206528e-8;
        else {
            return Value / 1;
        }
    }
    double calculate(String^ NameOfUnit1, String^ NameOfUnit2, double ValueOfUnit1) {
        return convertToGrams(NameOfUnit1, ValueOfUnit1) / convertToGrams(NameOfUnit2, 1);
    }
};

public ref class speed {
private:
    String^ nameOfUnit;
    double value;


public:
    speed() {
        nameOfUnit = gcnew String("");
        value = 0;
    }


    speed(String^ NameOfUnit, double Value) {
        nameOfUnit = String::Copy(NameOfUnit);
        value = Value;
    }


    String^ getNameOfUnit() { return nameOfUnit; }
    void setNameOfUnit(String^ NameOfUnit) {
        nameOfUnit = String::Copy(NameOfUnit);
    }


    double getValue() { return value; }
    void setValue(double Value) {
        value = Value;
    }
    double convertToMetersPerSecond(String^ NameOfUnit, double Value) {
        if (NameOfUnit == "meters per second") {
            return Value / 1;
        }
        else if (NameOfUnit == "kilometer per hour") {
            return Value / 3.6;
        }
        else if (NameOfUnit == "centimeter per second") {
            return Value / 100;
        }
        else if (NameOfUnit == "feet per second") {
            return Value / 3.28084;
        }
        else if (NameOfUnit == "miles per hour") {
            return Value / 2.237136;
        }
        else {
            return Value / 1;
        }
    }


    double calculate(String^ NameOfUnit1, String^ NameOfUnit2, double ValueOfUnit1) {
        return convertToMetersPerSecond(NameOfUnit1, ValueOfUnit1) / convertToMetersPerSecond(NameOfUnit2, 1);
    }
};

public ref class Number
{
private:
    String^ type;
    String^ BinaryValue;
    String^ HexaValue;
    String^ OctalValue;
    String^ DecimalValue;
public:
    Number(String^ initialType) {
        type = gcnew String(initialType);
        BinaryValue = gcnew String("");
        HexaValue = gcnew String("");
        OctalValue = gcnew String("");
        DecimalValue = gcnew String("");
    }
    String^ getType() { return type; }
    void setType(String^ Type) { type = String::Copy(Type); }
    String^ getValue(String^ Type) {
        if (Type == "Hexa") { return HexaValue; }
        else if (Type == "Binary") { return BinaryValue; }
        else if (Type == "Octal") { return OctalValue; }
        else if (Type == "Decimal") { return DecimalValue; }
        else { return "ERROR"; }
    }
    void setValue(String^ Type, String^ Value) {
        if (Type == "Hexa") { HexaValue = String::Copy(Value); }
        else if (Type == "Binary") { BinaryValue = String::Copy(Value); }
        else if (Type == "Octal") { OctalValue = String::Copy(Value); }
        else if (Type == "Decimal") { DecimalValue = String::Copy(Value); }
        else {}
    }
    void convert(String^ Value) {
        if (type == "Binary") {
            BinaryValue = Value;
            int decimalValue = System::Convert::ToInt32(BinaryValue, 2);
            HexaValue = System::Convert::ToString(decimalValue, 16);
            OctalValue = System::Convert::ToString(decimalValue, 8);
            DecimalValue = decimalValue.ToString();
        }
        else if (type == "Hexa") {
            HexaValue = Value;
            int decimalValue = System::Convert::ToInt32(HexaValue, 16);
            BinaryValue = System::Convert::ToString(decimalValue, 2);
            OctalValue = System::Convert::ToString(decimalValue, 8);
            DecimalValue = decimalValue.ToString();
        }
        else if (type == "Octal") {
            OctalValue = Value;
            int decimalValue = System::Convert::ToInt32(OctalValue, 8);
            BinaryValue = System::Convert::ToString(decimalValue, 2);
            HexaValue = System::Convert::ToString(decimalValue, 16);
            DecimalValue = decimalValue.ToString();
        }
        else if (type == "Decimal") {
            DecimalValue = Value;
            int decimalValue = System::Convert::ToInt32(DecimalValue, 10);
            BinaryValue = System::Convert::ToString(decimalValue, 2);
            HexaValue = System::Convert::ToString(decimalValue, 16);
            OctalValue = System::Convert::ToString(decimalValue, 8);
        }
        else
        {
        }
    }
    void shiftLeft() {
        // Lấy ký tự đầu tiên (most significant bit)
        Char firstChar = BinaryValue[0];
        // Xoá ký tự đầu tiên và thêm ký tự '0' vào cuối chuỗi
        String^ temp = BinaryValue->Substring(1) + "0";
        BinaryValue = temp;
        int decimalValue = System::Convert::ToInt32(BinaryValue, 2);
        HexaValue = System::Convert::ToString(decimalValue, 16);
        OctalValue = System::Convert::ToString(decimalValue, 8);
        DecimalValue = decimalValue.ToString();
    }
    void shiftRight() {
        int length = BinaryValue->Length;

        // Kiểm tra nếu độ dài của chuỗi là 0 hoặc chuỗi chỉ chứa ký tự '0', không thực hiện dịch phải
        if (length == 0 || BinaryValue->Trim('0')->Length == 0) {
            return;
        }
        // Lấy ký tự cuối cùng (least significant bit)
        Char lastChar = BinaryValue[length - 1];
        // Xoá ký tự cuối cùng và thêm ký tự '0' vào đầu chuỗi
        String^ temp = "0" + BinaryValue->Substring(0, length - 1);
        BinaryValue = temp;
        int decimalValue = System::Convert::ToInt32(BinaryValue, 2);
        HexaValue = System::Convert::ToString(decimalValue, 16);
        OctalValue = System::Convert::ToString(decimalValue, 8);
        DecimalValue = decimalValue.ToString();
    }

};
