# JSAPIChallengeActivityResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**activityId** | **NSNumber*** | The id of the activity | 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**challengeId** | **NSNumber*** | The id of the challenge | [optional] 
**coreSettings** | [**JSAPICoreChallengeActivitySettings***](JSAPICoreChallengeActivitySettings.md) | Defines core settings about the activity that affect how it can be created/played by users. Values may be left null to inherit from parent activity. | [optional] 
**entitlement** | [**JSAPIActivityEntitlementResource***](JSAPIActivityEntitlementResource.md) | The entitlement item needed to participate in the activity as part of this event. Null indicates free entry. When creating/updating only id is used. Item must be pre-existing | [optional] 
**_id** | **NSNumber*** | The unique ID for this resource | [optional] 
**rewardSet** | [**JSAPIRewardSetResource***](JSAPIRewardSetResource.md) | The rewards to give at the end of each occurence of the activity. When creating/updating only id is used. Reward set must be pre-existing | [optional] 
**settings** | [**NSArray&lt;JSAPISelectedSettingResource&gt;***](JSAPISelectedSettingResource.md) | The list of settings and the select options | [optional] 
**template** | **NSString*** | A challenge activity template this challenge activity is validated against (private). May be null and no validation of additional_properties will be done | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


