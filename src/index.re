ReactDOMRe.renderToElementWithId(
  <ComposableMap height=980 width=800>
    <ZoomableGroup center=[0, 0] disablePanning=true>
      <Geographies geography="./world-50m.json">
        ...(
             (geographies, projection) =>
               Array.mapi(
                 (idx, geography) =>
                   <Geography
                     key=(string_of_int(idx))
                     geography
                     projection
                   />,
                 geographies,
               )
               |> ReasonReact.array
           )
      </Geographies>
    </ZoomableGroup>
  </ComposableMap>,
  "main",
);