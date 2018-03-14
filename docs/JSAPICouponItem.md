# JSAPICouponItem

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**couponTypeHint** | **NSString*** | The type of coupon | 
**discountMax** | **NSNumber*** | The amount this coupon is maxed out at.  Applies if coupon_type_hint is coupon_cart | [optional] 
**discountMinCartValue** | **NSNumber*** | The minimium amount needed in the cart for the coupon to apply.  Applies if coupon_type_hint is coupon_cart | [optional] 
**discountType** | **NSString*** | The type of discount in terms of how it deducts price. Value based discount not available for coupon_cart type coupons | 
**discountValue** | **NSNumber*** | The amount the coupon will discount the item. If discount_type is &#39;value&#39; this will be a flat amount of currency. If discount type is &#39;percentage&#39; this will be a fraction (0.2 for 20% off) multiplied by the price of the matching item or items. | 
**exclusive** | **NSNumber*** | Whether this coupon is exclusive or not (true means cannot be in same cart as another).  Default &#x3D; false | [optional] 
**itemId** | **NSNumber*** | The id of the item the coupon is applied to.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher | [optional] 
**maxQuantity** | **NSNumber*** | The maximum quantity of items the coupon can apply to, null if no limit and minimum 1 otherwise.  Applies if coupon_type_hint is coupon_single_item or coupon_voucher | [optional] 
**selfExclusive** | **NSNumber*** | Whether this coupon is exclusive to itself or not (true means cannot add two of this same coupon to the same cart).  Default &#x3D; false | [optional] 
**validForTags** | **NSArray&lt;NSString*&gt;*** | A list of tags for a coupon.  The coupon can only apply to an item that has at least one of these tags.  Applies if coupon_type_hint is coupon_tag | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


