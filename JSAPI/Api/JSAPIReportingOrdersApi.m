#import "JSAPIReportingOrdersApi.h"
#import "JSAPIQueryParamCollection.h"
#import "JSAPIApiClient.h"
#import "JSAPIPageResourceAggregateInvoiceReportResource_.h"
#import "JSAPIResult.h"


@interface JSAPIReportingOrdersApi ()

@property (nonatomic, strong, readwrite) NSMutableDictionary *mutableDefaultHeaders;

@end

@implementation JSAPIReportingOrdersApi

NSString* kJSAPIReportingOrdersApiErrorDomain = @"JSAPIReportingOrdersApiErrorDomain";
NSInteger kJSAPIReportingOrdersApiMissingParamErrorCode = 234513;

@synthesize apiClient = _apiClient;

#pragma mark - Initialize methods

- (instancetype) init {
    return [self initWithApiClient:[JSAPIApiClient sharedClient]];
}


-(instancetype) initWithApiClient:(JSAPIApiClient *)apiClient {
    self = [super init];
    if (self) {
        _apiClient = apiClient;
        _mutableDefaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

-(NSString*) defaultHeaderForKey:(NSString*)key {
    return self.mutableDefaultHeaders[key];
}

-(void) setDefaultHeaderValue:(NSString*) value forKey:(NSString*)key {
    [self.mutableDefaultHeaders setValue:value forKey:key];
}

-(NSDictionary *)defaultHeaders {
    return self.mutableDefaultHeaders;
}

#pragma mark - Api Methods

///
/// Retrieve invoice counts aggregated by time ranges
/// <b>Permissions Needed:</b> REPORTING_ORDERS_ADMIN
///  @param currencyCode The code for a currency to get sales data for 
///
///  @param granularity The time duration to aggregate by (optional, default to day)
///
///  @param filterPaymentStatus A payment status to filter results by, can be a comma separated list (optional)
///
///  @param filterFulfillmentStatus An invoice fulfillment status to filter results by, can be a comma separated list (optional)
///
///  @param startDate The start of the time range to return, unix timestamp in seconds. Default is beginning of time (optional)
///
///  @param endDate The end of the time range to return, unix timestamp in seconds. Default is end of time (optional)
///
///  @param size The number of objects returned per page (optional, default to 25)
///
///  @param page The number of the page returned (optional, default to 1)
///
///  @returns JSAPIPageResourceAggregateInvoiceReportResource_*
///
-(NSURLSessionTask*) getInvoiceReportsWithCurrencyCode: (NSString*) currencyCode
    granularity: (NSString*) granularity
    filterPaymentStatus: (NSString*) filterPaymentStatus
    filterFulfillmentStatus: (NSString*) filterFulfillmentStatus
    startDate: (NSNumber*) startDate
    endDate: (NSNumber*) endDate
    size: (NSNumber*) size
    page: (NSNumber*) page
    completionHandler: (void (^)(JSAPIPageResourceAggregateInvoiceReportResource_* output, NSError* error)) handler {
    // verify the required parameter 'currencyCode' is set
    if (currencyCode == nil) {
        NSParameterAssert(currencyCode);
        if(handler) {
            NSDictionary * userInfo = @{NSLocalizedDescriptionKey : [NSString stringWithFormat:NSLocalizedString(@"Missing required parameter '%@'", nil),@"currencyCode"] };
            NSError* error = [NSError errorWithDomain:kJSAPIReportingOrdersApiErrorDomain code:kJSAPIReportingOrdersApiMissingParamErrorCode userInfo:userInfo];
            handler(nil, error);
        }
        return nil;
    }

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/reporting/orders/count/{currency_code}"];

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    if (currencyCode != nil) {
        pathParams[@"currency_code"] = currencyCode;
    }

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    if (granularity != nil) {
        queryParams[@"granularity"] = granularity;
    }
    if (filterPaymentStatus != nil) {
        queryParams[@"filter_payment_status"] = filterPaymentStatus;
    }
    if (filterFulfillmentStatus != nil) {
        queryParams[@"filter_fulfillment_status"] = filterFulfillmentStatus;
    }
    if (startDate != nil) {
        queryParams[@"start_date"] = startDate;
    }
    if (endDate != nil) {
        queryParams[@"end_date"] = endDate;
    }
    if (size != nil) {
        queryParams[@"size"] = size;
    }
    if (page != nil) {
        queryParams[@"page"] = page;
    }
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.apiClient.configuration.defaultHeaders];
    [headerParams addEntriesFromDictionary:self.defaultHeaders];
    // HTTP header `Accept`
    NSString *acceptHeader = [self.apiClient.sanitizer selectHeaderAccept:@[@"application/json"]];
    if(acceptHeader.length > 0) {
        headerParams[@"Accept"] = acceptHeader;
    }

    // response content type
    NSString *responseContentType = [[acceptHeader componentsSeparatedByString:@", "] firstObject] ?: @"";

    // request content type
    NSString *requestContentType = [self.apiClient.sanitizer selectHeaderContentType:@[]];

    // Authentication setting
    NSArray *authSettings = @[@"oauth2_client_credentials_grant", @"oauth2_password_grant"];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];

    return [self.apiClient requestWithPath: resourcePath
                                    method: @"GET"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"JSAPIPageResourceAggregateInvoiceReportResource_*"
                           completionBlock: ^(id data, NSError *error) {
                                if(handler) {
                                    handler((JSAPIPageResourceAggregateInvoiceReportResource_*)data, error);
                                }
                            }];
}



@end
