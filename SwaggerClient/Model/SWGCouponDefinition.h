#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/




@protocol SWGCouponDefinition
@end

@interface SWGCouponDefinition : SWGObject


@property(nonatomic) NSString* code;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* discountType;

@property(nonatomic) NSNumber* exclusive;

@property(nonatomic) NSNumber* maxDiscount;

@property(nonatomic) NSNumber* maxQuantity;

@property(nonatomic) NSNumber* minCartTotal;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* selfExclusive;

@property(nonatomic) NSNumber* targetItemId;

@property(nonatomic) NSString* type;

@property(nonatomic) NSArray<NSString*>* validForTags;

@property(nonatomic) NSNumber* value;

@property(nonatomic) NSNumber* vendorId;

@end
