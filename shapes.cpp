#include<iostream>
#include<cmath>

class shape 
{            
    protected:
        float m_S, m_P;
    public:
    shape()
        : m_S(0)
        , m_P(0)
    {
    }
    ~shape()
    {
    }
};

class rectangle: public shape 
{
    protected:
        float m_side_a, m_side_b;
    public:
    rectangle()
        : shape()
        , m_side_a(0)
        , m_side_b(0)
    {      
    }
    rectangle(float side_a, float side_b)
        : shape()
        , m_side_a(side_a)
        , m_side_b(side_b)
    {      
    }
    
        void area()
        {
            m_S = m_side_a * m_side_b; 
                if (m_side_a == m_side_b)
            std::cout << "Area of the Square: " << m_S << std::endl;
                else
            std::cout << "Area of the Rectangle: " << m_S << std::endl;
        }
        void parimeter()
        {
            m_P = 2 * (m_side_a + m_side_b);   
                if (m_side_a == m_side_b)
                std::cout << "The perimeter of the Square: " << m_P << std::endl;
                else
                std::cout << "The perimeter of the Rectangle: " << m_P << std::endl;
        }
    ~rectangle()
    {
    }
};

class square: public rectangle 
{
    public:
    square()
        : rectangle()
    {      
    }
    square(float side_a)
        : rectangle(side_a, side_a)
    {      
    }
    
    ~square()
    {
    }
};

class triangle: public shape 
{
    private:
        float m_a, m_b, m_c, m_p;  
    public:
    triangle()
        : shape()
        , m_a(0)
        , m_b(0)
        , m_c(0)
    {
    }
    triangle(float a, float b, float c)
        : shape()
        , m_a( a )
        , m_b( b )
        , m_c( c )
        , m_p ((a + b + c)/2)
    {
        if ( (m_a + m_b <= m_c) || (m_a + m_c <= m_b) || (m_b + m_c <= m_a) )
        {
            std::cout << "Such Triangle does not exist, please try again!" <<std::endl;
        }
    }
    
        void area()
        {
        if ( (m_a + m_b <= m_c) || (m_a + m_c <= m_b) || (m_b + m_c <= m_a) )
            {
            std::cout << "Such Triangle does not exist, please try again!" <<std::endl;
            }
        else
            {
            m_S = sqrt(m_p * (m_p - m_a) * (m_p - m_b) * (m_p - m_c)); 
            std::cout << "The area of Triangle: " << m_S << std::endl;
            }
        }
        
        
        void parimeter()
        {
        if ( (m_a + m_b <= m_c) || (m_a + m_c <= m_b) || (m_b + m_c <= m_a) )
            {
            std::cout << "Such Triangle does not exist, please try again!" <<std::endl;
            }
        else
            {
            m_P = ( m_a + m_b + m_c );
            std::cout << "The parimeter of Triangle: " << m_P << std::endl;
            }
        }
    ~triangle()
    {
    }
};

class ellipse: public shape 
{
    protected:
        float m_R, m_r;
    public:
    ellipse()
        : shape()
        , m_R(0)
        , m_r(0)
    {      
    }
    ellipse(float R, float r)
        : shape()
        , m_R( R )
        , m_r( r )
    {      
    }

        void area()
        {
            m_S = 3.14 * m_r * m_R; 
                if (m_r == m_R)
                std::cout << "Area of the circle: " << m_S << std::endl;
                else
                std::cout << "Area of the ellipse: " << m_S << std::endl;
        }
        void parimeter()
        {
            m_P = 3.14 * (m_r + m_R);
                if (m_r == m_R)
                std::cout << "The perimeter of the circle: " << m_P << std::endl;
                else
                std::cout << "The perimeter of the ellipse: " << m_P << std::endl;
        }
    ~ellipse()
    {
    }
};

class circle: public ellipse
{
    public:
    circle()
        : ellipse()
    {
    }
    circle(float R)
        : ellipse(R, R)
    {
    }

    ~circle()
    {
    } 
}; 


int main(){
    rectangle r1( 5, 7);
    r1.area();
    r1.parimeter();
    
    square s1(5);
    s1.area();
    s1.parimeter(); 
    
    triangle t1(5, 3, 4);
    t1.area();
    t1.parimeter();
   
    ellipse e1(8, 2);
    e1.area();
    e1.parimeter();
    
    circle c1(2.5);
    c1.area();
    c1.parimeter();

return 0;
}
