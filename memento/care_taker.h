#include "memento.h"

class RoleStateCaretaker
{
    public:
        void setRoleStateMemento(RoleStateMemento* m_memento)
        {
            this->m_memento = m_memento;
        }
        RoleStateMemento* getMemento()
        {
            return this->m_memento;
        }
    private:
        RoleStateMemento* m_memento;

};