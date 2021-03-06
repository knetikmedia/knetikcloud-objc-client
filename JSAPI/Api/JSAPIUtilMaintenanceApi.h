#import <Foundation/Foundation.h>
#import "JSAPIMaintenance.h"
#import "JSAPIResult.h"
#import "JSAPIApi.h"

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



@interface JSAPIUtilMaintenanceApi: NSObject <JSAPIApi>

extern NSString* kJSAPIUtilMaintenanceApiErrorDomain;
extern NSInteger kJSAPIUtilMaintenanceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// Delete maintenance info
/// <b>Permissions Needed:</b> MAINTENANCE_ADMIN
///
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) deleteMaintenanceWithCompletionHandler: 
    (void (^)(NSError* error)) handler;


/// Get current maintenance info
/// Get current maintenance info. 404 if no maintenance. <br><br><b>Permissions Needed:</b> ANY
///
/// 
///  code:200 message:"maintenance",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"no maintenance"
///
/// @return JSAPIMaintenance*
-(NSURLSessionTask*) getMaintenanceWithCompletionHandler: 
    (void (^)(JSAPIMaintenance* output, NSError* error)) handler;


/// Set current maintenance info
/// <b>Permissions Needed:</b> MAINTENANCE_ADMIN
///
/// @param maintenance The maintenance object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) setMaintenanceWithMaintenance: (JSAPIMaintenance*) maintenance
    completionHandler: (void (^)(NSError* error)) handler;


/// Update current maintenance info
/// <b>Permissions Needed:</b> MAINTENANCE_ADMIN
///
/// @param maintenance The maintenance object (optional)
/// 
///  code:200 message:"OK",
///  code:400 message:"Bad Request",
///  code:401 message:"Unauthorized",
///  code:403 message:"Forbidden",
///  code:404 message:"Not Found"
///
/// @return void
-(NSURLSessionTask*) updateMaintenanceWithMaintenance: (JSAPIMaintenance*) maintenance
    completionHandler: (void (^)(NSError* error)) handler;



@end
