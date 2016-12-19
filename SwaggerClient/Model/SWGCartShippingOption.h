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




@protocol SWGCartShippingOption
@end

@interface SWGCartShippingOption : SWGObject


@property(nonatomic) NSString* currencyCode;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* name;

@property(nonatomic) NSNumber* originalPrice;

@property(nonatomic) NSNumber* price;

@property(nonatomic) NSNumber* shippingItemId;

@property(nonatomic) NSString* sku;

@property(nonatomic) NSNumber* taxable;

@property(nonatomic) NSNumber* vendorId;

@property(nonatomic) NSString* vendorName;

@end
