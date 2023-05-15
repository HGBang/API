#pragma once
#include "GameObject.h"
class CMonsterRealDieEffect :
    public CGameObject
{

	friend class CScene;

protected:
	CMonsterRealDieEffect();
	CMonsterRealDieEffect(const CMonsterRealDieEffect& Obj);
	virtual ~CMonsterRealDieEffect();

private:
	EEffect_Type	m_EffectType;
	float			m_Duration;
	float			m_Time;
	float			m_Damage;

public:
	EEffect_Type GetEffectType() const
	{
		return m_EffectType;
	}

	void SetDuration(float Duration)
	{
		m_Duration = Duration;
	}





public:
	virtual bool Init();
	virtual void Update(float DeltaTime);
	virtual void PostUpdate(float DeltaTime);
	virtual void Render(HDC hDC, float DeltaTime);
	void AnimationEnd();
};

