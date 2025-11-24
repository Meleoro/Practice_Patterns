#pragma once

class Transform {
public :
	static Transform Origin() 
	{
		Transform transform;
		return transform;
	}

	Transform Combine(Transform& other) 
	{
		Transform result;
		return result;
	}
};