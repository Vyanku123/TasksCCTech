#include<iostream>
using namespace std;

class Unit
{
public:
    float i;

};


class length :public Unit //for length unit
{
public:
    void mm_mm();
    void mm_cm();
    void mm_m();
    void mm_km();
    void mm_mile();
    void mm_feet();
    void mm_inch();
    void cm_mm();
    void cm_cm();
    void cm_m();
    void cm_km();
    void cm_mile();
    void cm_feet();
    void cm_inch();
    void m_mm();
    void m_cm();
    void m_m();
    void m_km();
    void m_mile();
    void m_feet();
    void m_inch();
    void km_mm();
    void km_cm();
    void km_m();
    void km_km();
    void km_mile();
    void km_feet();
    void km_inch();
    void mile_mm();
    void mile_cm();
    void mile_m();
    void mile_km();
    void mile_mile();
    void mile_feet();
    void mile_inch();
    void feet_mm();
    void feet_cm();
    void feet_m();
    void feet_km();
    void feet_mile();
    void feet_feet();
    void feet_inch();
    void inch_mm();
    void inch_cm();
    void inch_m();
    void inch_km();
    void inch_mile();
    void inch_feet();
    void inch_inch();
};

class temperature :public Unit  // for temperature unit
{
public:
    void cel_cel();
    void cel_f();
    void cel_k();
    void f_cel();
    void f_f();
    void f_k();
    void k_cel();
    void k_f();
    void k_k();
    

};

class weight : public Unit
{
public:
    void milligm_milligm();
    void milligm_gm();
    void milligm_kg();
    void milligm_ton();
    void gm_milligm();
    void gm_gm();
    void gm_kg();
    void gm_ton();
    void kg_milligm();
    void kg_gm();
    void kg_kg();
    void kg_ton();
    void ton_milligm();
    void ton_gm();
    void ton_kg();
    void ton_ton();
   
};

void weight::milligm_milligm()
{
    while (true)
    {
        try
        {
            cout << "\n   milligramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i < 0)
            {
                cout << "Enter Positive Value only" << endl;
                break;
            }
            else
            {
                cout << "\n   Milligram= " << 1 * i << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }   
    }
}
void weight::milligm_gm()
{
    while (true)
    {
        try
        {
            cout << "\n   milligramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else {
                cout << "\n   gramm= " << i * 0.001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::milligm_kg()
{
    while (true)
    {
        try
        {
            cout << "\n   milligramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   kilogramm= " << i * 0.000001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }

    
}
void weight::milligm_ton()
{
    while (true)
    {
        try
        {
            cout << "\n   milligramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Tonne= " << i * 0.000000001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::gm_milligm()
{
    while (true)
    {
        try
        {
            cout << "\n   Gramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milligram= " << i * 1000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::gm_gm()
{
    while (true)
    {
        try
        {
            cout << "\n   Gramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Gramm= " << i * 1;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::gm_kg()
{
    while (true)
    {
        try
        {
            cout << "\n   Gramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   kilogramm= " << i * 0.001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::gm_ton()
{
    while (true)
    {
        try
        {
            cout << "\n   Gramm= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Tonne= " << i * 0.000001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::kg_milligm()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilogram= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milligram= " << i * 100000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::kg_gm()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilogram= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Gramm= " << i * 1000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::kg_kg()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilogram= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   kilogramm= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::kg_ton()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilogram= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Tonne= " << i * 0.001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::ton_milligm()
{
    while (true)
    {
        try
        {
            cout << "\n   Tonne= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milligram= " << i * 100000000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::ton_gm()
{
    while (true)
    {
        try
        {
            cout << "\n   Tonne= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Gramm= " << i * 100000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::ton_kg()
{
    while (true)
    {
        try
        {
            cout << "\n   Tonne= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   kilogramm= " << i * 1000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void weight::ton_ton()
{
    while (true)
    {
        try
        {
            cout << "\n   Tonne= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Tonne= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}

void length::mm_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Millimeter= " << i * 1 << endl;
                break;
            }
        }
        catch (int i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 0.1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Meter= " << i * 0.001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   kiloMeter= " << i * 0.000001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 0.000001 << "km" << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 0.00328 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mm_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Millimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 0.00328 << endl;
                break;
            }

        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   milimeter= " << i * 10 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Meter= " << i * 0.01 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            cout << "\n   Kilometer= " << i * 0.00001 << endl;
            break;
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }

    
}
void length::cm_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 0.00000621 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 0.032 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::cm_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Centimeter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 0.3937 << endl;
                break;
            }


        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    

}
void length::m_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milimeter= " << i * 1000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::m_cm()
{
    cout << "\n   Meter= ";
    while(true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else {
                cout << "\n   Centimeter= " << i * 100 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::m_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Meter= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::m_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n  Kilometer= " << i * 0.001 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }    
    }    
}
void length::m_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 0.00062 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::m_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 3.28 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
   
}
void length::m_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Meter= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 39.37 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::km_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milimeter= " << i * 1000000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::km_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 10000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::km_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else {
                cout << "\n   Meter= " << i * 1000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::km_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }

            else
            {
                cout << "\n  Kilometer= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }

    
}
void length::km_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 0.6213 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::km_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 3280.84 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }  
    }
    
}
void length::km_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Kilometer= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 39370.08 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milimeter= " << i * 1609344.0514 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 160934.4051 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Meter= " << i * 1609.3440 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n  Kilometer= " << i * 1.6093 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 5280.00016 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::mile_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Miles= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 63360.0020 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milimeter= " << i * 304.8000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 30.4800 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else {
                cout << "\n   Meter= " << i * 0.3048 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n  Kilometer= " << i * 0.000305 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Mile= " << i * 0.0001894 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::feet_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Feets= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 12.000000384 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_mm()
{
    while (true)
    {
        try
        {
            cout << "\n   Inch= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Milimeter= " << i * 25.4000 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_cm()
{
    while (true)
    {
        try
        {
            cout << "\n   Inch= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Centimeter= " << i * 2.5400 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_m()
{
    while (true)
    {
        try
        {
            cout << "\n   Inches= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Meter= " << i * 0.025 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_km()
{
    while (true)
    {
        try
        {
            cout << "\n   Inches= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n  Kilometer= " << i * 2.5400 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_mile()
{
    while (true)
    {
        try
        {
            cout << "\n   Inches= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        break;
    }
    
}
void length::inch_feet()
{
    while (true)
    {
        try
        {
            cout << "\n   Inches= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Feet= " << i * 0.08333 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}
void length::inch_inch()
{
    while (true)
    {
        try
        {
            cout << "\n   Inches= \n";
            cout << "Enter Value" << endl;
            cin >> i;
            if (i <= 0)
            {
                cout << "Enter Positive Value only" << endl;
            }
            else
            {
                cout << "\n   Inch= " << i * 1 << endl;
                break;
            }
        }
        catch (float i)
        {
            cout << "Invalid Entry";
        }
        
    }
    
}


void temperature::cel_cel()
{
    cout << "\n   celsius= ";
    cin >> i;
    cout << "\n   celsius= " << i *1;
}
void temperature::cel_f()
{
    cout << "\n   Celsius= ";
    cin >> i;
    cout << "\n   Fahrenheit= " << (((9 * i) / 5) + 32);
}
void temperature::cel_k()
{
    cout << "\n   celsius= ";
    cin >> i;
    cout << "\n   kelvin= " << i + 273;
}
void temperature::f_cel()
{
    cout << "\n   Fahrenheit= ";
    cin >> i;
    cout << "\n   Celsius= " << (((i - 32) / 9) * 5);
}
void temperature::f_f()
{
    cout << "\n   Fahrenheit= ";
    cin >> i;
    cout << "\n   Celsius= " << i*1;
}
void temperature::f_k()
{
    cout << "\n   Fahrenheit= ";
    cin >> i;
    cout << "\n   Kelvin= " << (((i - 32) / 9) * 5)+273.15;
}

void temperature::k_cel()
{
    cout << "\n   kelvin= ";  cin >> i;
    cout << "\n   celsius= " << i - 273;
}
void temperature::k_f()
{
    cout << "\n   kelvin= ";  cin >> i;
    cout << "\n   celsius= " << (((i - 273.15) / 5) * 9) + 32;
}
void temperature::k_k()
{
    cout << "\n   kelvin= ";  cin >> i;
    cout << "\n   celsius= " << i *1;
}

int main()
{
    length l;
    temperature t;
    weight w;
    int x, y;
    int FirstUnit, SecondUnit;
    while (1)
    {
        cout << "WELCOME TO UNIT CONVERTION\n";
        cout << "\n1: Length\n" << "2: Temparature\n" << "3: Weight\n" << "4: Area\n" << "5: Exit\n";
        cout << "\n\nPlease choose your Convertion Type:";
        cin >> x;

        if (x == 1)
        {
            int FirstUnit, SecondUnit;
            cout << "Enter first choice";
            cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
            cin >> FirstUnit;
            if(FirstUnit==1)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 1 && SecondUnit==1)
                {
                    l.mm_mm();
                }
                else if (FirstUnit == 1 && SecondUnit == 2)
                {
                    l.mm_cm();
                }
                else if (FirstUnit == 1 && SecondUnit == 3)
                {
                    l.mm_m();
                }
                else if (FirstUnit == 1 && SecondUnit == 4)
                {
                    l.mm_km();
                }
                else if (FirstUnit == 1 && SecondUnit == 5)
                {
                    l.mm_mile();
                }
                else if (FirstUnit == 1 && SecondUnit == 6)
                {
                    l.mm_feet();
                }
                else if (FirstUnit == 1 && SecondUnit == 7)
                {
                    l.mm_inch();
                }
            }
            if (FirstUnit == 2)
            {
                cout << "\n\nEnter second choice ";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 2 && SecondUnit == 1)
                {
                    l.cm_mm();
                }
                else if (FirstUnit == 2 && SecondUnit==2)
                {
                    l.cm_cm();
                }
                else if (FirstUnit == 2 && SecondUnit ==3 )
                {
                    l.cm_m();
                }
                else if (FirstUnit == 2 && SecondUnit == 4)
                {
                    l.cm_km();
                }
                else if (FirstUnit == 2 && SecondUnit == 5)
                {
                    l.cm_mile();
                }
                else if (FirstUnit == 2 && SecondUnit == 6)
                {
                    l.cm_feet();
                }
                else if (FirstUnit == 2 && SecondUnit == 7)
                {
                    l.cm_inch();
                }
            }
            if (FirstUnit == 3)
            {
                cout << "\n\nEnter second choice ";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 3 && SecondUnit == 1)
                {
                    l.m_mm();
                }
                else if (FirstUnit == 3 && SecondUnit == 2)
                {
                    l.m_cm();
                }
                else if (FirstUnit == 3 && SecondUnit == 3)
                {
                    l.m_m();
                }
                else if (FirstUnit == 3 && SecondUnit == 4)
                {
                    l.m_km();
                }
                else if (FirstUnit == 3 && SecondUnit == 5)
                {
                    l.m_mile();
                }
                else if (FirstUnit == 3 && SecondUnit == 6)
                {
                    l.m_feet();
                }
                else if (FirstUnit == 3 && SecondUnit == 7)
                {
                    l.m_inch();
                }
            }
            if (FirstUnit == 4)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 4 && SecondUnit == 1)
                {
                    l.km_mm();
                }
                else if (FirstUnit == 4 && SecondUnit == 2)
                {
                    l.km_cm();
                }
                else if (FirstUnit ==4 && SecondUnit == 3)
                {
                    l.km_m();
                }
                else if (FirstUnit == 4 && SecondUnit == 4)
                {
                    l.km_km();
                }
                else if (FirstUnit == 4 && SecondUnit == 5)
                {
                    l.km_mile();
                }
                else if (FirstUnit == 4 && SecondUnit == 6)
                {
                    l.km_feet();
                }
                else if (FirstUnit == 4 && SecondUnit == 7)
                {
                    l.km_inch();
                }
            }
            if (FirstUnit == 5)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 5 && SecondUnit == 1)
                {
                    l.mile_mm();
                }
                else if (FirstUnit == 5&& SecondUnit == 2)
                {
                    l.mile_cm();
                }
                else if (FirstUnit == 5 && SecondUnit == 3)
                {
                    l.mile_m();
                }
                else if (FirstUnit == 5 && SecondUnit == 4)
                {
                    l.mile_km();
                }
                else if (FirstUnit == 5 && SecondUnit == 5)
                {
                    l.mile_mile();
                }
                else if (FirstUnit == 5 && SecondUnit == 6)
                {
                    l.mile_feet();
                }
                else if (FirstUnit == 5 && SecondUnit == 7)
                {
                    l.mile_inch();
                }
            }
            if (FirstUnit == 6)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 6 && SecondUnit == 1)
                {
                    l.feet_mm();
                }
                else if (FirstUnit == 6 && SecondUnit == 2)
                {
                    l.feet_cm();
                }
                else if (FirstUnit == 6 && SecondUnit == 3)
                {
                    l.feet_m();
                }
                else if (FirstUnit == 6 && SecondUnit == 4)
                {
                    l.feet_km();
                }
                else if (FirstUnit == 6 && SecondUnit == 5)
                {
                    l.feet_mile();
                }
                else if (FirstUnit == 6 && SecondUnit == 6)
                {
                    l.feet_feet();
                }
                else if (FirstUnit == 6 && SecondUnit == 7)
                {
                    l.feet_inch();
                }
            }
            if (FirstUnit == 7)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Milimeter\n" << "2: Centimeter\n" << "3:Meter \n" << "4: Kilometer\n" << "5: Mile\n" << "6: Feet\n" << "7: Inch\n";
                cin >> SecondUnit;
                if (FirstUnit == 7 && SecondUnit == 1)
                {
                    l.inch_mm();
                }
                else if (FirstUnit == 7 && SecondUnit == 2)
                {
                    l.inch_cm();
                }
                else if (FirstUnit == 7 && SecondUnit == 3)
                {
                    l.inch_m();
                }
                else if (FirstUnit == 7 && SecondUnit == 4)
                {
                    l.inch_km();
                }
                else if (FirstUnit == 7 && SecondUnit == 5)
                {
                    l.inch_mile();
                }
                else if (FirstUnit == 7 && SecondUnit == 6)
                {
                    l.inch_feet();
                }
                else if (FirstUnit == 7 && SecondUnit == 7)
                {
                    l.inch_inch();
                }
            }
        }
        if (x == 2)
        {
            int FirstUnit, SecondUnit;
            cout << "Enter first choice";
            cout << "\n 1:Celsius\n" << "2: fahrenhiet\n" << "3:Kelvin \n" << endl;
            cin >> FirstUnit;
            if (FirstUnit == 1)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Celsius\n" << "2: fahrenhiet\n" << "3:Kelvin \n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 1 && SecondUnit == 1)
                {
                    t.cel_cel();
                }
                if (FirstUnit == 1 && SecondUnit == 2)
                {
                    t.cel_f();
                }
                if (FirstUnit == 1 && SecondUnit == 3)
                {
                    t.cel_k();
                }
            }
            if (FirstUnit == 2)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Celsius\n" << "2: fahrenhiet\n" << "3:Kelvin \n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 2 && SecondUnit == 1)
                {
                    t.f_cel();
                }
                if (FirstUnit == 2 && SecondUnit == 2)
                {
                    t.f_f();
                }
                if (FirstUnit == 2 && SecondUnit == 3)
                {
                    t.f_k();
                }
            }
            if (FirstUnit == 3)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Celsius\n" << "2: fahrenhiet\n" << "3:Kelvin \n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 3 && SecondUnit == 1)
                {
                    t.k_cel();
                }
                if (FirstUnit == 3 && SecondUnit == 2)
                {
                    t.k_f();
                }
                if (FirstUnit == 3 && SecondUnit == 3)
                {
                    t.k_k();
                }
            }
        }
        if (x == 3)
        {
            int FirstUnit, SecondUnit;
            cout << "Enter first choice";
            cout << "\n 1:Miligram\n" << "2: Gram\n" << "3:Kilogram \n" << "4: Tonne\n" << endl;
            cin >> FirstUnit;
            if (FirstUnit == 1)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Miligram\n" << "2: Gram\n" << "3:Kilogram \n" << "4: Tonne\n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 1 && SecondUnit == 1)
                {
                    w.milligm_milligm();
                }
                if (FirstUnit == 1 && SecondUnit == 2)
                {
                    w.milligm_gm();
                }
                if (FirstUnit == 1 && SecondUnit == 3)
                {
                    w.milligm_kg();
                }
                if (FirstUnit == 1 && SecondUnit == 4)
                {
                    w.milligm_ton();
                }
            }
            if (FirstUnit == 2)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Miligram\n" << "2: Gram\n" << "3:Kilogram \n" << "4: Tonne\n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 2 && SecondUnit == 1)
                {
                    w.gm_milligm();
                }
                if (FirstUnit == 2 && SecondUnit == 2)
                {
                    w.gm_gm();
                }
                if (FirstUnit == 2 && SecondUnit == 3)
                {
                    w.gm_kg();
                }
                if (FirstUnit == 2 && SecondUnit == 4)
                {
                    w.gm_ton();
                }
            }
            if (FirstUnit == 3)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Miligram\n" << "2: Gram\n" << "3:Kilogram \n" << "4: Tonne\n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 3 && SecondUnit == 1)
                {
                    w.kg_milligm();
                }
                if (FirstUnit == 3 && SecondUnit == 2)
                {
                    w.kg_gm();
                }
                if (FirstUnit == 3 && SecondUnit == 3)
                {
                    w.kg_kg();
                }
                if (FirstUnit == 3 && SecondUnit == 4)
                {
                    w.kg_ton();
                }
            }
            if (FirstUnit == 4)
            {
                cout << "\n\nEnter second choice";
                cout << "\n 1:Miligram\n" << "2: Gram\n" << "3:Kilogram \n" << "4: Tonne\n" << endl;
                cin >> SecondUnit;
                if (FirstUnit == 4 && SecondUnit == 1)
                {
                    w.ton_milligm();
                }
                if (FirstUnit == 4 && SecondUnit == 2)
                {
                    w.ton_gm();
                }
                if (FirstUnit == 4 && SecondUnit == 3)
                {
                    w.ton_kg();
                }
                if (FirstUnit == 4 && SecondUnit == 4)
                {
                    w.ton_ton();
                }
            }
        }
    }
}
