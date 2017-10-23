# JSAPIStoreItem

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**displayable** | **NSNumber*** | Whether or not the item is currently visible to users. Does not block purchase; Use store_start or store_end to block purchase.  Default &#x3D; true | [optional] 
**geoCountryList** | **NSArray&lt;NSString*&gt;*** | A list of country ID to include in the blacklist/whitelist geo policy | [optional] 
**geoPolicyType** | **NSString*** | Whether to use the geo_country_list as a black list or white list for item geographical availability | [optional] 
**shippingTier** | **NSNumber*** | Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default &#x3D; 0 | [optional] 
**skus** | [**NSArray&lt;JSAPISku&gt;***](JSAPISku.md) | The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart | 
**storeEnd** | **NSNumber*** | The date the item will become hidden and unavailable for purchase, unix timestamp in seconds.  If set to null, item will never leave the store | [optional] 
**storeStart** | **NSNumber*** | The date the item will become visible (if displayable) and available for purchase, unix timestamp in seconds.  If set to null, item will appear in store immediately | [optional] 
**vendorId** | **NSNumber*** | The vendor who provides the item | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


