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




@protocol SWGRewardCurrencyResource
@end

@interface SWGRewardCurrencyResource : SWGObject

/* The code of the currency type to give 
 */
@property(nonatomic) NSString* currencyCode;
/* The name of the currency reward to give.  Set by currency_code) [optional]
 */
@property(nonatomic) NSString* currencyName;
/* The highest number (worst) rank to give the reward to. Must be greater than or equal to minRank 
 */
@property(nonatomic) NSNumber* maxRank;
/* The lowest number (best) rank to give the reward to. Must be greater than zero 
 */
@property(nonatomic) NSNumber* minRank;
/* True if the value is actually a percentage of the intake 
 */
@property(nonatomic) NSNumber* percent;
/* The amount of currency to give. For percentage values, 0.5 is 50% 
 */
@property(nonatomic) NSNumber* value;

@end
