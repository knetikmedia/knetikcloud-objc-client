# JSAPISubscriptionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | The additional properties for the subscription | [optional] 
**availability** | **NSString*** | Who can purchase this subscription | [optional] 
**behaviors** | [**NSArray&lt;JSAPIBehavior&gt;***](JSAPIBehavior.md) | The behaviors linked to the item, describing various options and interactions. May not be included in item lists | [optional] 
**category** | **NSString*** | The category of the subscription | [optional] 
**consolidationDayOfMonth** | **NSNumber*** | The day of the month 1..31 this subscription will renew | [optional] 
**createdDate** | **NSNumber*** | The date the item was created, unix timestamp in seconds | [optional] 
**displayable** | **NSNumber*** | Whether or not the item is currently visible to users. Does not block purchase; Use store_start or store_end to block purchase.  Default &#x3D; true | [optional] 
**geoCountryList** | **NSArray&lt;NSString*&gt;*** | The geo country list for the subscription | [optional] 
**geoPolicyType** | **NSString*** | The geo policy type for the subscription | [optional] 
**_id** | **NSNumber*** | The id of the item | [optional] 
**longDescription** | **NSString*** | A long description of the subscription | [optional] 
**name** | **NSString*** | The name of the item | 
**plans** | [**NSArray&lt;JSAPISubscriptionPlanResource&gt;***](JSAPISubscriptionPlanResource.md) | The billing options for this subscription | [optional] 
**shortDescription** | **NSString*** | A short description of the subscription.  Max 255 characters | [optional] 
**sort** | **NSNumber*** | A number to use in sorting items.  Default 500 | [optional] 
**storeEnd** | **NSNumber*** | Used to schedule removal from store.  Null means the subscription will never be removed | [optional] 
**storeStart** | **NSNumber*** | Used to schedule appearance in store.  Null means the subscription will appear now | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The tags for the subscription | [optional] 
**template** | **NSString*** | The template being used | [optional] 
**uniqueKey** | **NSString*** | The unique key of the subscription | [optional] 
**updatedDate** | **NSNumber*** | The date the item was last updated | [optional] 
**vendorId** | **NSNumber*** | The id of the vendor | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


