# SWGShippingItem

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary&lt;SWGProperty&gt;***](SWGProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template | [optional] 
**behaviors** | [**NSArray&lt;SWGBehavior&gt;***](SWGBehavior.md) | The behaviors linked to the item, describing various options and interactions. May not be included in item lists | [optional] 
**category** | **NSString*** | A category for filtering items | [optional] 
**countries** | **NSArray&lt;NSString*&gt;*** | A unique list of country iso3 codes that allow the shipping option | [optional] 
**createdDate** | **NSNumber*** | The date the item was created, unix timestamp in seconds | [optional] 
**displayable** | **NSNumber*** | Whether or not the item is currently displayable.  Default &#x3D; true | [optional] 
**geoCountryList** | **NSArray&lt;NSString*&gt;*** | A list of country ID to include in the blacklist/whitelist geo policy | [optional] 
**geoPolicyType** | **NSString*** | Whether to use the geo_country_list as a black list or white list for item geographical availability | [optional] 
**_id** | **NSNumber*** | The id of the item | [optional] 
**longDescription** | **NSString*** | A long description of the item | [optional] 
**maxTierTotal** | **NSNumber*** | An abstract max value that the values of item&#39;s shipping_tier work against to decide whether an order can be fulfilled | 
**name** | **NSString*** | The name of the item | 
**shippingTier** | **NSNumber*** | Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default &#x3D; 0 | [optional] 
**shortDescription** | **NSString*** | A short description of the item, max 255 chars | [optional] 
**skus** | [**NSArray&lt;SWGSku&gt;***](SWGSku.md) | The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart | 
**sort** | **NSNumber*** | A number to use in sorting items.  Default 500 | [optional] 
**storeEnd** | **NSNumber*** | The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store | [optional] 
**storeStart** | **NSNumber*** | The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | List of tags used for filtering items | [optional] 
**taxable** | **NSNumber*** | Whether tax should be applied to the shipping price.  Default &#x3D; false | [optional] 
**template** | **NSString*** | An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default &#x3D; null | [optional] 
**typeHint** | **NSString*** | The type of the item | 
**uniqueKey** | **NSString*** | The unique key for the item | [optional] 
**updatedDate** | **NSNumber*** | The date the item was last updated, unix timestamp in seconds | [optional] 
**vendorId** | **NSNumber*** | The vendor who provides the item | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


