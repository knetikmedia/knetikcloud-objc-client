# SWGCouponItem

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary&lt;SWGProperty&gt;***](SWGProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type, or be an extra not from the template | [optional] 
**behaviors** | [**NSArray&lt;SWGBehavior&gt;***](SWGBehavior.md) | The behaviors linked to the item, describing various options and interactions. May not be included in item lists | [optional] 
**category** | **NSString*** | A category for filtering items | [optional] 
**couponTypeHint** | **NSString*** | The type of coupon | 
**createdDate** | **NSNumber*** | The date the item was created, unix timestamp in seconds | [optional] 
**discountMax** | **NSNumber*** | The amount this coupon is maxed out at.  Applies if coupon_type_hint is coupon_cart | [optional] 
**discountMinCartValue** | **NSNumber*** | The minimium amount needed in the cart for the coupon to apply.  Applies if coupon_type_hint is coupon_cart | [optional] 
**discountType** | **NSString*** | The type of discount in terms of how it deducts price. Value based discount not available for coupon_cart type coupons | 
**discountValue** | **NSNumber*** | The amount the coupon will discount the item. If discount_type is &#39;value&#39; this will be a flat amount of currency. If discount type is &#39;percentage&#39; this will be a fraction (0.2 for 20% off) multiplied by the price of the matching item or items. | 
**displayable** | **NSNumber*** | Whether or not the item is currently displayable.  Default &#x3D; true | [optional] 
**exclusive** | **NSNumber*** | Whether this coupon is exclusive or not (true means cannot be in same cart as another).  Default &#x3D; false | [optional] 
**geoCountryList** | **NSArray&lt;NSString*&gt;*** | A list of country ID to include in the blacklist/whitelist geo policy | [optional] 
**geoPolicyType** | **NSString*** | Whether to use the geo_country_list as a black list or white list for item geographical availability | [optional] 
**_id** | **NSNumber*** | The id of the item | [optional] 
**itemId** | **NSNumber*** | The id of the item the coupon is applied to.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher | [optional] 
**longDescription** | **NSString*** | A long description of the item | [optional] 
**maxQuantity** | **NSNumber*** | The maximum quantity of items the coupon can apply to, null if no limit and minimum 1 otherwise.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher | [optional] 
**name** | **NSString*** | The name of the item | 
**selfExclusive** | **NSNumber*** | Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default &#x3D; false | [optional] 
**shippingTier** | **NSNumber*** | Provides the abstract shipping needs if this item is physical and can be shipped.  A value of zero means no shipping needed.  Default &#x3D; 0 | [optional] 
**shortDescription** | **NSString*** | A short description of the item, max 255 chars | [optional] 
**skus** | [**NSArray&lt;SWGSku&gt;***](SWGSku.md) | The skus for the item. Each defines a unique configuration for the item to be purchased (Large-Blue, Small-Green, etc). These are what is ultimately selected in the store and added to the cart | 
**sort** | **NSNumber*** | A number to use in sorting items.  Default 500 | [optional] 
**storeEnd** | **NSNumber*** | The date the item will leave the store, unix timestamp in seconds.  If set to null, item will never leave the store | [optional] 
**storeStart** | **NSNumber*** | The date the item will appear in the store, unix timestamp in seconds.  If set to null, item will appear in store immediately | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | List of tags used for filtering items | [optional] 
**template** | **NSString*** | An item template this item is validated against.  May be null and no validation of additional_properties will be done.  Default &#x3D; null | [optional] 
**typeHint** | **NSString*** | The type of the item | 
**uniqueKey** | **NSString*** | The unique key for the item | [optional] 
**updatedDate** | **NSNumber*** | The date the item was last updated, unix timestamp in seconds | [optional] 
**validForTags** | **NSArray&lt;NSString*&gt;*** | A list of tags for a coupon.  The coupon can only apply to an item that has at least one of these tags.  Applies if coupon_type_hint is coupon_tag | [optional] 
**vendorId** | **NSNumber*** | The vendor who provides the item | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


