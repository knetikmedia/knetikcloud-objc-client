# JSAPISubscriptionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary&lt;JSAPIProperty&gt;***](JSAPIProperty.md) | A map of item additional properties, keyed on the property name. Must match the names and types defined in the template for this item type. | [optional] 
**availability** | **NSString*** | Who can purchase this subscription | [optional] 
**behaviors** | [**NSArray&lt;JSAPIBehavior&gt;***](JSAPIBehavior.md) | The behaviors linked to the item, describing various options and interactions. May not be included in item lists | [optional] 
**category** | **NSString*** | A category for filtering items | [optional] 
**consolidationDayOfMonth** | **NSNumber*** | The day of the month 1..31 this subscription will renew | [optional] 
**createdDate** | **NSNumber*** | The date the item was created, unix timestamp in seconds | [optional] 
**geoCountryList** | **NSArray&lt;NSString*&gt;*** | A list of country iso3 codes to include in the blacklist/whitelist geo policy | [optional] 
**geoPolicyType** | **NSString*** | Whether to use the geo_country_list as a black list or white list for item geographical availability | [optional] 
**_id** | **NSNumber*** | The id of the item | [optional] 
**longDescription** | **NSString*** | A long description of the subscription | [optional] 
**name** | **NSString*** | The name of the item | 
**plans** | [**NSArray&lt;JSAPISubscriptionPlanResource&gt;***](JSAPISubscriptionPlanResource.md) | The billing options for this subscription | [optional] 
**shortDescription** | **NSString*** | A short description of the subscription.  Max 255 characters | [optional] 
**sort** | **NSNumber*** | A number to use in sorting items.  Default 500 | [optional] 
**storeEnd** | **NSNumber*** | Used to schedule removal from store.  Null means the subscription will never be removed | [optional] 
**storeStart** | **NSNumber*** | Used to schedule appearance in store.  Null means the subscription will appear now | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | List of tags used for filtering items | [optional] 
**template** | **NSString*** | An item template this item is validated against. May be null and no validation of additional properties will be done. | [optional] 
**uniqueKey** | **NSString*** | The unique key for the item | [optional] 
**updatedDate** | **NSNumber*** | The date the item was last updated | [optional] 
**vendorId** | **NSNumber*** | The vendor who provides the item | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


