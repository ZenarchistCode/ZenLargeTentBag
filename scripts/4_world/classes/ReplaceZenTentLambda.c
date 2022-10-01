class ReplaceZenTentLambda : ReplaceItemWithNewLambdaBase
{
	void ReplaceZenTentLambda(EntityAI old_item, string new_item_type)
	{
		m_OldItem = old_item;
		m_NewItemType = new_item_type;
	}

	override void CopyOldPropertiesToNew(notnull EntityAI old_item, EntityAI new_item)
	{
		MiscGameplayFunctions.TransferItemProperties(old_item, new_item);
	}
};