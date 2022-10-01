modded class LargeTent
{
	// Detect the tent being placed on a player's back
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		super.EEItemLocationChanged(oldLoc, newLoc);

		if (GetGame().IsDedicatedServer())
		{
			if (newLoc.GetType() == InventoryLocationType.ATTACHMENT && GetHierarchyParent() && GetHierarchyParent().IsInherited(PlayerBase))
			{
				GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(ZenPackTentBag, 1);
			}
		}
	}

	// Convert tent into a backpack
	private void ZenPackTentBag()
	{
		this.GetInventory().ReplaceItemWithNew(InventoryMode.SERVER, new ReplaceZenTentLambda(this, "LargeTentBackpack"));
	}

	// Only allow attaching tent to player
	override bool CanPutAsAttachment(EntityAI parent)
	{
		return super.CanPutAsAttachment(parent) && parent && parent.IsInherited(PlayerBase);
	}
};