# SWGChallengeActivityResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**activityId** | **NSNumber*** | The id of the activity | 
**challengeId** | **NSNumber*** | The id of the challenge | [optional] 
**entitlement** | [**SWGActivityEntitlementResource***](SWGActivityEntitlementResource.md) | The entitlement item needed to participate in the activity as part of this event. Null indicates free entry. When creating/updating only id is used. Item must be pre-existing | [optional] 
**_id** | **NSNumber*** | The unique ID for this resource | [optional] 
**rewardSet** | [**SWGRewardSetResource***](SWGRewardSetResource.md) | The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing | [optional] 
**settings** | [**NSArray&lt;SWGSelectedSettingResource&gt;***](SWGSelectedSettingResource.md) | The list of settings and the select options | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


