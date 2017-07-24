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




@protocol JSAPISqlDatabaseConfig
@end

@interface JSAPISqlDatabaseConfig : JSAPIObject


@property(nonatomic) NSNumber* connectionPoolSize;

@property(nonatomic) NSString* dbName;

@property(nonatomic) NSString* hostname;

@property(nonatomic) NSString* password;

@property(nonatomic) NSNumber* port;

@property(nonatomic) NSString* username;

+ (NSDictionary *)modalDictionary;

@end
