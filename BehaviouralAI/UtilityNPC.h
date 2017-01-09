#ifndef UTILITY_NPC_H_
#define UTILITY_NPC_H_
#include "src/BaseNPC.h"

namespace UtilitySystem
{
	class UtilityNPC : public BaseNPC
	{
	public:
		UtilityNPC(World* pWorld) : BaseNPC(m_pWorld)
		{
			
		}
		~UtilityNPC();
	protected:
		void selectAction(float a_fdeltaTime) override;
	};
}
#endif