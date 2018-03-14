#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol JSAPIStateResource
@end

@interface JSAPIStateResource : JSAPIObject

/* The code of the state [optional]
 */
@property(nonatomic) NSString* code;
/* The iso3 of the country this state is in [optional]
 */
@property(nonatomic) NSString* countryCodeIso3;
/* The unique ID for the state [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The name of the state [optional]
 */
@property(nonatomic) NSString* name;

+ (NSDictionary *)modalDictionary;

@end
